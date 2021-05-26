# 문자

- 아스키 코드
미국정보교환표준부호, 또는 줄여서 ASCII는 영문 알파벳을 사용하는 대표적인 문자 인코딩이다.
[아스키 코드](https://ko.wikipedia.org/wiki/ASCII)

- scanf
입력 함수로써 문자나 숫자를 입력받을 수 있다. C언어에서는 화이트 스페이스(Space Bar, Tab, Enter를 누를 때 입력되는 문자)가 적용되어 하나의 문자로 처리 되므로 특히 문자를 입력받을 때는
공백에 신경을 써야한다.
ex) scanf(" %c %c", &ch1, &ch2);

- getchar, putchar는 문자 전용 입출력 함수이다.
버퍼에 저장된 내용을 지워야하는 경우 (연속된 입력을 받을 때 화이트 스페이스가 들어간경우) 사용하면 좋다.
```C
/* 예시 */
printf("학번 입력 : ");
scanf("%d", &num); // 숫자를 입력 받은 후 엔터키로 다음으로 넘김
getchar(); // 엔터키의 개행문자를 받아줌
printf("학점 입력 : ");
grade = getchar();
printf("학번 : %d, 학점 : %c", num, grade);
```

