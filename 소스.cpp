//동적할당 한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야 하는가?
//동적할당 : malloc&free나 new&delete로 할당하는 것
//동적할당한 대상은 함수에 의해 변하면 안되기 때문에, 매개변수를 상수선언 해야한다.(const 선언)

//함수 내에 선언된 변수를 참조형으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?
//참조형은 지정 변수 없이는 선언할 수 없기 때문에, 포인터로 선언하여 포인터로 반환해야 한다.

//c에서 쓰던 헤더를 cpp에서 표준으로 바꿔놓은 것이 있다.
//<stdio.h> -> <cstdio>
//<stdlib.h> -> <cstdlib>
//<math.h> -> <cmath>
//<string.h> -> <cstring>
//가급적 cpp기반의 헤더를 쓰는 것이 좋다.
//c에선 함수 오버로딩 기능이 없기 때문에, 기능이 같아도 자료형에 따라 함수이름도 달리 해야 한다.

#include<cmath>
#include<cstdio>
#include<cstring>
using namespace std;//c의 표준에 정의된 함수들도 std 안에 선언되어, std::를 생략하기 위해 using을 쓴다.
//printf나 scanf와 같은 기본함수는 std 생략없이 그냥 써도 컴파일되지만, 컴파일러마다 다르기 때문에 생략 선언을 해두는 것이 좋다.

int main()
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);//str2에 str1을 복붙한다.
	printf("%s: %f \n", str1, sin(0.14));//sin함수
	printf("%s: %f \n", str2, abs(-1.25));//절대값 반환 함수
	return 0;
}