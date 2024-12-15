#include <iostream>
using namespace std;

int n;                 // Số lượng đỉnh
int s[100];            // Lưu đường đi
int c[100][100];       // Ma trận kề

void PrintPath(int *s, int length) {
    for (int i = 1; i <= length; i++) {
        cout << " " << s[i];
    }
    cout << endl;
}

bool IsFeasible(int *s, int k) {
    for (int i = 1; i < k; i++) {
        if (s[i] == s[k]) // Kiểm tra trùng đỉnh
            return false;
    }
    if (c[s[k - 1]][s[k]] == 0) // Kiểm tra cạnh tồn tại
        return false;
    return true;
}

void FindPath(int k, int target) {
    if (s[k - 1] == target) { // Điều kiện khi đạt đỉnh đích
        PrintPath(s, k - 1);
    } else {
        for (int j = 1; j <= n; j++) { // Duyệt các đỉnh
            s[k] = j; // Đặt đỉnh tiếp theo
            if (IsFeasible(s, k)) { // Nếu hợp lệ
                FindPath(k + 1, target); // Tiếp tục tìm đường
            }
        }
    }
}

int main() {
    n = 6; // Số đỉnh
    s[1] = 1; // Điểm xuất phát là đỉnh 1

    // Thiết lập ma trận kề
    c[1][2] = c[2][1] = 1;
    c[2][3] = c[3][2] = 1;
    c[3][4] = c[4][3] = 1;
    c[5][6] = c[6][5] = 1;
    c[1][6] = c[6][1] = 1;
    c[3][5] = c[5][3] = 1;
    c[2][6] = c[6][2] = 1;

    FindPath(2, 6); // Bắt đầu từ bước 2 (k = 2), đỉnh đích là 6
    return 0;
}
