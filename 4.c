#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void sayMyName(char name[]) {
    printf("안녕, %s!", name);
}

int main() {
    char name[100];

    printf("당신의 영어 풀네임을 알려주세요! : ");

    // %[^\n]s 를 사용하여 공백을 포함해 입력받음
    scanf("%[^\n]s", name);

    sayMyName(name);

    return 0;
}