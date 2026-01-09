//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//    int i, j;
//    int a;
//    printf("층수를 입력하세요: ");
//    scanf("%d", &a);
//
//    // 가장 윗줄에 출력될 별의 개수 설정 (예: 5층이면 9개)
//    int aa = 2 * a - 1;
//
//    // i는 입력받은 층수부터 1까지 감소 (공백 루프 유지용)
//    for (i = a; i >= 1; i--) {
//
//        // 1. 공백 출력: 기존 코드의 로직을 그대로 두어 공백이 줄어들게 함
//        for (j = 1; j <= i; j++) {
//            printf(" ");
//        }
//
//        // 2. 별 출력: aa개만큼 출력
//        for (int p = 0; p < aa; p++) {
//            printf("*");
//        }
//
//        // 별의 개수를 2개씩 줄임
//        aa -= 2;
//        printf("\n");
//    }
//    return 0;
//}