int main() {
    int score;

    // 사용자로부터 점수 입력 받기
    printf("점수를 입력하세요(0-100): ");
    scanf("%d", &score);

    // 점수에 따라 학점 결정하기

    switch (score/10)
    {
    case 10:
    case 9:
        printf("학점 A\n");
    case 8:
        printf("학점 B\n");
    case 7:
        printf("학점 C\n");
    case 6:
        printf("학점 D\n");
        break;
    
    default:
        printf("학점 F\n");  
        break;
    }
}