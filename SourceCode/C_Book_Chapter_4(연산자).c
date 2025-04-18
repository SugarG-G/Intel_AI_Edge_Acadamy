/***********************************************************/
// [4-1] 대입, 더하기, 빼기, 곱하기, 음수 연산
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a, b;

	a = 10;
	b = 20;

	printf("%d + %d = %d\n", a, b, a + b);
	printf("%d - %d = %d\n", a, b, a - b);
	printf("%d * %d = %d\n", a, b, a * b);
	printf("%d\n", -a);

	return 0;
}
#endif

/***********************************************************/
// [4-2] 나누기 나머지 연산자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	double apple;
	int banana, orange;

	apple = 5.0 / 2.0;
	printf("%lf\n", apple);
	// 1. 우항 먼저 실행 5.0 / 2.0
	// 2. 우항 연산 : 실수 / 실수 -> 실수
	// 3. 실수 결과를 apple에 대입

	banana = 5 / 2;
	printf("%d\n", banana);
	// 1. 우항 먼저 실행 5 / 2
	// 2. 우항 연산 : 정수 / 정수 -> 정수
	// 3. 정수 결과를 banana에 대입

	orange = 5 % 2;
	printf("%d\n", orange);


	return 0;
}
#endif

/***********************************************************/
// [4-2-1] (실습) 최소 동전 구하기
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	// 자판기에 동전을 투입
	// 잔돈을 출력하는 프로그램
	int input = 770;
	int price = 100; // 아침햇살
	int change = input - price;
	// change : 900
	// ====출력문구====
	// 50원짜리 : 1개
	// 10원짜리 : 2개
	printf("잔돈 : %d원\n", change);
	printf("500원짜리 : %d개\n", change / 500);
	printf("100원짜리 : %d개\n", change % 500 / 100);
	// change - 500 * 500원개수 - 100 * 100원개수
	// => 770 % 100 : 70
	printf("50원짜리 : %d개\n", change % 100 / 50);
	printf("10원짜리 : %d개\n", change % 50 / 10);
	return 0;
}
#endif

/***********************************************************/
// [4-2-2] (실습) 주어진 초를 시간으로 계산
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int time = 7533; // 총 초(seconds)의 수가 주어진다
	// ====출력 결과====
	// 2시간 5분 33초
	int h, m, s;
	h = time / (60 * 60);
	m = time % (60 * 60) / 60;
	s = time % (60 * 60) % 60;
	printf("%d시 %d분 %d초", h, m, s);
	return 0;
}
#endif

/***********************************************************/
// [4-4] 전위 표기와 후위 표기를 사용한 증감 연산
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 5, b = 5;
	int prefix, postfix;
	prefix = (++a) * 3;
	postfix = (b++) * 3;
	printf("%d %d\n", prefix, postfix);
	printf("%d %d\n", a, b);
	
	return 0;
}
#endif

/***********************************************************/
// [4-5] 관계 연산의 결괏값 확인
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	// 0 이외의 모든 정수는 참의 역할
	// 1 = 참, 0 = 거짓
	int a = 10, b = 20, c =10;
	int result;

	result = (a > b);
	printf("a > b : %d\n", result);

	result = (a >= b);
	printf("a >= b : %d\n", result);

	result = (a < b);
	printf("a < b : %d\n", result);

	result = (a <= b);
	printf("a <= b : %d\n", result);

	result = (a == b);
	printf("a == b : %d\n", result);

	result = (a != b);
	printf("a != b : %d\n", result);

	return 0;
}
#endif

/***********************************************************/
// [4-6] 논리 연산의 결괏값 확인
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	// && (AND) : 논리곱
	// || (OR) : 논리합
	// ! (NOT) : 논리 부정
	int a = 30;
	int result;

	result = (a > 10) && (a < 20);
	printf("(a > 10) && (a < 20) = %d\n", result);

	result = (a < 10) || (a > 20);
	printf("(a < 10) || (a > 20) = %d\n", result);

	result = !(a >= 30);
	printf("!(a >= 30) = %d\n", result);
	return 0;
}
#endif

/***********************************************************/
// [4-확인] 평균을 구해보자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a, b, c;
	int sum;
	int avg;
	scanf("%d %d %d", &a, &b, &c);

	sum = a + b + c;
	avg = sum / 3;

	printf("%d\n", sum);
	printf("%d", avg);

	return 0;
}
#endif

/***********************************************************/
// [4-8] 형 변환 연산자가 필요한 경우
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 20, b = 3;

	double result = (double)a / b;
	printf("%lf\n", result);

	int answer = result;
	printf("%d", answer);

	// 자동 형 변환 : 컴파일시 자료형을 컴파일러가 알아서 바꿈
	// 묵시적, 암시적 형 변환
	// Implicit Type Casting

	// 명시적 형 변환 : (자료형)값
	// Explicit Type Castring

	return 0;
}
#endif

/***********************************************************/
// [4-9] sizeof 연산자의 사용 예
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(100));
	printf("수식의 결괏값의 크기 : %d\n", sizeof(1.5 + 3.4));
	printf("char형 자료형의 크기 : %d\n", sizeof(char));

	return 0;
}
#endif

/***********************************************************/
// [4-10] 복합대입 연산자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int result = 2;

	a += 20;
	result *= b + 10;

	return 0;
}
#endif

/***********************************************************/
// [4-11] 콤마 연산자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int result;

	result = (++a, ++b);

	return 0;
}
#endif

/***********************************************************/
// [4-12] 조건 연산자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int menu = 7;
	// 조건 연산자 : C언어에서 3항 연산자
	// 		ㄴ(조건식) ? 실행문장1 : 실행문장2
	// 조건식 : 논리 결과 (1 또는 0)
	// 		ㄴ 1또는 0
	//		ㄴ 관계 연산자 (<, >, <=, >=, ==, !=)
	//		ㄴ 논리 연산자 (&&, ||, !)

	//menu가 0이면 짜장면, 1이면 짬뽕
	char lunch_menu = menu % 2 == 0 ? 0 : 1;
	printf("내일의 점심 메뉴 : %d\n", lunch_menu);
	
	
	return 0;
}
#endif

/***********************************************************/
// [4-12-큰 값] 큰 값을 구하자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	/*
	문제 : 
		사용자로부터 두 정수를 입력 받아
		A와 B에 저장하자
		출력 > 큰 수 : ??
		만약, A가 10, B가 20 -> 큰 수 : 20
	*/

	//---정답 코드---
	int A, B;
	scanf("%d %d", &A, &B);

	printf("큰 수 : %d", A > B ? A : B);
	//---------------
	return 0;
}
#endif

/***********************************************************/
// [4-12-절댓값] 절댓값을 구해보자
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	/*
		사용자가 입력한 정수 > 절댓값으로 출력
		Ex) 사용자 입력 10, 출력 > 절댓값 10
			사용자 입력 -10, 출력 > 절댓값 -10
	*/

	//---정답 코드---
	int a, result;
	scanf("%d", &a);
	result = a > 0 ? a : -a;
	printf("%d", result);
	//---------------
	return 0;
}
#endif

/***********************************************************/
// [4-13] 비트 연산식의 결과
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	int a = 10, b = 12;

   	// a & b
	printf("a & b = %d\n", a & b);
    // a : 00000000 00000000 00000000 00001010
    // b : 00000000 00000000 00000000 00001100
    // 8 : 00000000 00000000 00000000 00001000

    // a | b
    // a : 00000000 00000000 00000000 00001010
    // b : 00000000 00000000 00000000 00001100
    // r : 00000000 00000000 00000000 00001110
    printf("a | b = %d\n", a | b); // r : 14

    // a ^ b : 두 논리가 다를 때 참!! 
    // a : 00000000 00000000 00000000 00001010
    // b : 00000000 00000000 00000000 00001100
    // r : 00000000 00000000 00000000 00000110
    printf("a ^ b = %d\n", a ^ b); // r : 6

    // ~a : 부정 연산 1을 0으로 0을 1로
    // a : 00000000 00000000 00000000 00001010
    //~a : 11111111 11111111 11111111 11110101
    // r : 00000000 00000000 00000000 00001011 : -11
    printf("~a = %d\n", ~a); // -11

    // a << 1
    // a : 00000000 00000000 00000000 00001010
    // r : 00000000 00000000 00000000 00010100 : 20
    printf("a << 3 = %d\n", a << 3); // 80

    // b >> 1
    // b : 00000000 00000000 00000000 00001100 : 12
    // r : 00000000 00000000 00000000 00000110 : 6
    printf("b >> 1 = %d\n", b >> 1); // 6

    // -11 >> 1
    // ~a >> 1
    // ~a : 1
    // -11 : 00000000 00000000 00000000 00001011
    //     : 11111111 11111111 11111111 11110101
    //     : 11111111 11111111 11111111 11111010
    //음수 : 00000000 00000000 00000000 00000110 : 6
	printf("~a >> 1 = %d\n", ~a >> 1);



	return 0;
}
#endif

/***********************************************************/
// [4-14] 연산자 우선순위와 연산 방향
/***********************************************************/

#if 1
#include <stdio.h>

int main(void)
{
	printf("10 / 5 * 2 = %d\n", 10 / 5 * 2); // 4
	printf("10 > 5 && 10 != 5 %d\n", 10 > 5 && 10 != 5); // 1
	printf("10 %% 3 == 0 %d\n", 10 % 3 == 0); // 0

	return 0;
}
#endif

/***********************************************************/
// [0-0] 타이틀
/***********************************************************/

#if 0
#include <stdio.h>

int main(void)
{
	
	return 0;
}
#endif