void increaseNormal(void);
void increaseStatic(void);

int main() {

    printf("---------------\n");
    printf("Normal Variable\n");
    printf("---------------\n");
    increaseNormal();
    increaseNormal();
    increaseNormal();

    printf("---------------\n");
    printf("Static Variable\n");
    printf("---------------\n");
    increaseStatic();
    increaseStatic();
    increaseStatic();

    return 0;
}

void increaseNormal(void) {
    int x = 0;
    printf("%d\n", x);
    x = x + 1;
}

void increaseStatic(void) {
    static int x = 0;
    printf("%d\n", x);
    x = x + 1;
}
