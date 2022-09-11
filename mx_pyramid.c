void mx_printchar(char h);

void mx_front(int i, int n) {
    for (int j = 0; j < n - i - 1; j++) {
        mx_printchar(' ');
    }
    mx_printchar('/');
    for (int j = 0; j < i * 2 - 1; j++) {
        if (i == n - 1) {
            mx_printchar('_');
        }
        else {
            mx_printchar(' ');
        }
    }
    mx_printchar('\\');
}

void mx_side(int i, int n) {
    if (i < n / 2) {
        for (int j = 0; j < i; j++) {
            mx_printchar(' ');
        }
        mx_printchar('\\');
    }
    else {
        for (int j = 0; j < n - i - 1; j++) {
            mx_printchar(' ');
        }
        mx_printchar('|');
    }
}

void mx_pyramid(int n) {
    if (n < 2 || n % 2 == 1) {
        return;
    }
    for (int i = 0; i < n; i++) {
        mx_front(i, n);
        if (i > 0) {
            mx_side(i ,n);
        }
        mx_printchar('\n');
    }
}

int main() {
    mx_pyramid(4);
}

