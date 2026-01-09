//#include <stdio.h>
//
//int main() {
//    int month;
//
//    printf("월을 입력하세요 (1-12): ");
//    scanf("%d", &month);
//
//    // 31일까지 있는 달인지 체크
//    if (month == 1 || month == 3 || month == 5 || month == 7 ||
//        month == 8 || month == 10 || month == 12) {
//        printf("%d월은 31일까지 있습니다.\n", month);
//    }
//    else if (month >= 1 && month <= 12) {
//        printf("%d월은 31일까지 있지 않습니다.\n", month);
//    }
//    else {
//        printf("잘못된 입력입니다. 1에서 12 사이의 숫자를 입력하세요.\n");
//    }
//
//    return 0;
//}