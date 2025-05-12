
size_t
메모리 주소를 표현할 수 있을 만큼 큰 크기를 가진 부호 없는 정수형
size_t에 대해 잘못 알고 있는 분들 정말 많군요. 원문 어디에도 unsigned int 라는 말은 없습니다. size_t는 '이론상 가장 큰 사이즈를 담을 수 있는 unsigned 데이터 타입'으로 정의됩니다. 즉, 32비트 머신에서는 32비트 사이즈의 unsigned 정수형(int가 아니라 그냥 '정수'를 의미합니다), 64비트 머신에서는 64비트 사이즈의 unsigned 정수형(unsigned long long)입니다. 향후 등장할지도 모르는 128비트 머신이라던가 더 큰 머신이 존재한다면 그에 따라 더 큰 사이즈가 되겠지요.

이 내용은, 동영상 파일같이 4기가를 넘어가는 파일들을 처리하거나 큰 데이터를 처리하려 할 때 이 사실을 반드시 알고 있는게 좋습니다. 어설프게 unsigned int인줄 알고 int나 unsigned int로 형변환을 해서 사용하다가 범위를 벗어나는 버그를 발생시킬 가능성도 있으니까요



mvc패턴

정규식

nvvm과의 차이점

해시맵?

어노테이션 @Composable
annotation : 컴파일러에게 알려줌
composable
체인메소드

named argument

널인지 점검할때
수식 뒤 ! 는 이 수식은 널이 아니다라는뜻. 널이면 내가 책임지고 예외처리할게 라는 뜻
? ! 는 수식뒤에붙는다
sound null safe 법령강화느낌?

동기 : 쓰레드가 하나라고 생각
비동ㄱ; : 쓰레드가 2개로 생각. 호출하고 내할거하는거 병렬처리위해

자바스크립트 promise=플러터future

lamda
평범한 함수
fun sum(a:Int, b:Int):Int{
	return a+b;
}

convert to one line
val sum: (Int, Int) -> Int = { a: Int, b: Int -> a + b }
- (Int, Int) -> Int : I/O가 어떤 타입인지(sum변수의 타입이 (Int, Int) -> Int형태인 함수이다) 
- { a: Int, b: Int -> a + b } : 실제 바디
-> 축약
val sum={ a: Int, b: Int -> a + b }

trailing lamda
val product = items.fold(1) { acc, e -> acc * e }
"items" class
-> "fold" method
->> 2 parameter, Int & function
->>> 1 : Int
->>> { acc, e -> acc * e } : function

ex)
setContent { 
case 1: MyApp( content = { Greeting("test") } ) 
-> parameter에 람다함수를 쥐어줌
case 2: MyApp { Greeting("test") } 
-> 후행 람다로 붙여 코드를 간소화
}

fun MyApp(content:() -> Unit) { ... }
-> parameter인 content의 타입을 함수로 지정(parameter가 없고 반환값이 Unit인 함수)

it
단일 parameter일 때 쓰임(파라미터 구분 안해도 되서)



# class cons
- 클래스에 대한 접근
    ```
    class A{	int a = 1; //곧 생성될 객체의 멤버	static int b = 2; //클래스 A의 멤버}
    ```
    요러한 클래스가 있을 때,
    ```
    A obj = A();//객체를 통한 접근 시obj.a++; //성공obj.b++; //실패//클래스를 통한 접근 시A.a++; //실패A.b++; //성공
    ```
    즉, static int b → b stay in A class
- constructor - 기본
    - 용도 - 객체 생성 시 객체 멤버들의 초기화 담당
    - 예제
    ```
    class A{	int a = 1; //객체 멤버들	String b = 'hi';	//생성자 선언부. 미기재 시 default A(){};	A(int a_, String b_){		this.a=a_;		this.b=b_;	}	//=> 예약어를 통한 간단한 작성	A(this.a, this.b);}
    ```
    - 초기화 목록
- constructor - named constructor
    - 한 클래스에 여러 생성자를 선언하여 쓰임새 증가
    ```
    class A{	int a = 1; 	static int b = 2;	A.first() { ~~ }	A.second(~~) { ~~ }}
    ```
- constructor - factory
    - constructor만을 모은 factory constructor를 생성한다.  
        그리고 원래 클래스에는 생성자를 넣지 않는다.  
        → 정의와 생성의 분리
    - 객체를 만들 때 복잡한 처리가 요구될 때 씀
- constructor - singleton
    - 객체가 생성될 때, 인스턴스를 한개만 생성되도록 한다.
    - 프로그램 내에서 단 하나의 객체만 존재해야 하지만, 프로그램의 여러 부분들에서 해당 객체를 사용하여야 할 때 공유를 위해 씀
    - 장점  
        메모리 절약 - 한개의 인스턴스만 메모리를 먹어서  
        속도 빠름 - 이미 인스턴스가 메모리에 존재
- 클래스와 인스턴스의 관계
    - instance : a particular situation, event, or fact, especially an example of something that happens generally
    - 자동차 클래스
        - 제조사
        - 모델
        - 연식
        - 주행거리
        - 사고횟수
    - 자동차 클래스의 객체
        - 모닝
        - 벤츠 E클
    - 모닝 객체의 속성
        - 제조사 : 기아
        - 연식 : 2000년식
        - 주행거리 : 1000km
        - 사고횟수 : 10회
    ⇒ 자동차 클래스의 인스턴스는 모닝 객체
	⇒ 모닝 객체의 인스턴스는 제조사, 연식, 주행거리 등등의 속성
- 추상 클래스
    - 속성의 중복 기입을 피하기 위해 존재.
    - 폴리모피즘적인 설계 가
    - Super class = 사람
        - 머리색깔
        - 발 크기
    - Subclass = 남자
        - 머리색깔
        - 발 크기
        - **남자만의 특징 속성 xy**
    - Subclass = 여자
        - 머리색깔
        - 발 크기
        - **여자만의 특징 속성 xx**


일반화 특수화
사람(부모클래스), 사람이 좀 더 일반적이니까
남자 여자(잦식클래스)
이렇게 상속관계가 형성된 데이터타입은 형변환가능