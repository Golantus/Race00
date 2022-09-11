void mx_printchar(char h);

void mx_line(int n) {
    mx_printchar('+');
    for (int j = 0; j < n * 2; j++) {
        mx_printchar('-');
    }
    mx_printchar('+');
}

void mx_up(int i, int n) {
    for (int j = 0; j < n / 2 - i + 1; j++) {
        mx_printchar(' ');
    }
    if (i == 0 || i == n / 2 + 1) {
        mx_line(n);
    }
    else {
        mx_printchar('/');
        for (int j = 0; j < n * 2; j++) {
            mx_printchar(' ');
        }
        mx_printchar('/');
    }
}

void mx_side(int i, int n) {
    int temp = 0; 
    if (i <= n) {
        if (i <= n / 2)
            temp = n / 2 + 1 - i; 
        for (int j = 0; j < n / 2 - temp; j++) 
            mx_printchar(' ');
        mx_printchar('|');
    }
    else if (i == n + 1) {
        for (int j = 0; j < n / 2; j++)
            mx_printchar(' ');
        mx_printchar('+');
    }
    else {
        for (int j = 0; j < n / 2 - i +  n + 1; j++) 
            mx_printchar(' ');
        mx_printchar('/');
    }
}

void mx_front(int n) {
    mx_printchar('|');
    for (int j = 0; j < n * 2; j++) {
        mx_printchar(' ');
    }
    mx_printchar('|');
}

void mx_cube(int n) {
    if (n < 2) {
        return;
    }
    for (int i = 0; i < n * 1.5 + 2 - n % 2; i++) {
        if (i < n / 2 + 2) {
            mx_up(i, n);
        }
        if (i >= n / 2 + 2) {
            mx_front(n);
        }
        if (i > 0) {
            mx_side(i, n);
        }
        mx_printchar('\n');
    }
    mx_line(n);
    mx_printchar('\n');
}

int main() {
    mx_cube(33);
}

