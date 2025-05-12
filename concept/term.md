# Term

- program build
  source file → object file → exe 과정 전체. 
  1. Preprocessing
  2. compile
    source file → object file. 
    고급 언어에서 중간 코드 또는 오브젝트 코드로 번역하는 과정.
    컴파일러는 언어에 따라 다르며 (예: C, Java 등), 각 언어에 맞는 컴파일러를 사용함.
  3. link
    object file → exe. 
    소스코드에서 언급한 라이브러리들의 함수들과 소스코드를 연결.

- environment variable
os입장에서 해당 process를 실행시키기위해 참조하는 변수
ex) 환경 변수 Path의 동작 과정
  (Path 변수 = 운영체제가 어떤 프로세스를 실행시킬 때, 그 경로를 찾는데 이용)
  1. 프로세스가 언급한 object를 먼저 현재 작업 디렉토리에서 찾는다.
  2. 없으면 환경변수 Path에 등록된 경로를 모두 참조하여 object를 찾는다.
  3. 그래도 없으면 fail.

- namespace
변수가 저장되는 공간. 같은 공간에서는 중복X
변수가 Global한지 Local한지는 변수가 어느 namespace에 저장되어있냐에 따라 다름.
이를 통해 모듈성이 지원됨.

- object
상태 (어트리뷰트나 값) 를 갖고 동작 (메서드) 이 정의된 모든 데이터. 

- Package
프로그래머가 특정 작업을 수행하기 위해 개발한 프로그램 파일, 데이터 파일 등의 단순한 집합
소프트웨어를 컴퓨터에 배포하고 설치하는 방법이나 정보 포함

- API
Application Programming Interface
프로그램 간 데이터 교환 Interface
ex) Window API를 통해 Window(프로그램)와 내 프로그램 사이에 데이터 교환 -> 내 프로그램에서 윈도우의 기능을 쓸 수 있다.

- Sequence
순서대로 수행되는 일련의 논리적 단계

- framework
the basic structure that supports something such as a vehicle or building and gives it its shape
-> 구축되고 있는 구조물의 지원과 필수적인 '가이드'를 제공
개발 속도를 높이기 위해 맞춤형으로 제작된 구성요소 또는 솔루션을 제공하는 도구 
-> 소프트웨어 개발 및 시스템 개발을 위한 지원 프로그램, 컴파일러, 코드 라이브러리, 툴셋, API 등을 포함

- System
유기적으로 상호 작용하는 요소들의 모임
소프트웨어 자체도 하나의 시스템

- Inflate
메모리에 View 객체 생성
압축

- stored procedure
데이터베이스에 대한 일련의 작업(쿼리들)의 집합 
-> 함수처럼 사용가능

- 다형성

- Context
작업을 수행하는 데 도움이 되는 정보.
더 많은 컨텍스트를 제공할수록 상대방이 요청을 처리하기 쉽다. 
필수적일수도(parameter), 선택적일수도 있음.
or
작업을 중단해도 나중에 동일한 지점에서 재개할 수 있도록 저장해야 하는 작업들(프로세스, 스레드 등)에서 사용하는 최소 데이터 세트

- Interface
정보(값)을 주고받는 기능을 하는 것

- Implement
구현

- component
an identifiable part of a larger program or construction

- 어댑터 패턴
  서로 호환되지 않는 인터페이스를 가진 두 클래스를 서로 호환되도록 하는 패턴. 새로운 클래스를 생성하여 기존 클래스를 상속받아 다른 클래스의 인터페이스와 호환되도록 변환.
  디바이스 드라이버 같은 느낌

-  Functional Interface
  단 하나의 추상 메서드(abstract method)를 가지는 인터페이스.
  클래스에 단 하나의 abstract method만 선언한다.
  Default나 Static Method를 선언해도 상관없음. 오직 abstract만 하나면 됨.

- CRUD
	기본적인 데이터 처리 기능
	user interface가 갖춰야 할 기능
	create, read, update, delete

- Constants(const) - Compile time, Runtime
    - Compile time : 코드가 실행 파일(exe)로 변환되는 과정 동안의 시간
      Run time : 실행 파일이 실행 중인 시간
    - Constants(const) : 상수. 초기화 시 주어진 값이 변하지 않음.
    - Compile time constants : 코드단계에서부터 무조건 초기화되어야 되는 상수  
        Run time constants : 실행 중에 초기값이 입력되어도 되는 상수
    - 언어에 따라 선언이 다름  
        ex) Dart에서는 const가 컴파일타임, final이 런타임 상수이다.
    - 장점 : 프로그램의 최적화 가능, 실행까지 걸리는 시간 감소  
        단점 : 복잡, 굳이필요없어서 제한적으로 쓴대.  
  
- argument & parameter
    - 거진 같은 뜻인데 정확히는 Function에 전달되는 값이 parameter, 실제 값?이 argument

- static
staying in one place without moving, or not changing for a long time
    	- static과 const의 차이
    	    static : 변수처럼 값을 마음대로 바꿀 수 있으나 메모리 공간에 항상 상주하고 있다.  
    	    const : 한번 값을 정하면(초기화 하면) 절대로 바꿀 수 없다.
    - 동적 변수는 변수를 메모리 공간에 할당할 때, 힙이나 스택 공간에 할당하고 해제함.  
        static 변수는 프로그램의 런타임동안 항상 메모리에 할당되어있음.  
        그러므로 static으로 선언된 변수는 전체 프로그램에서 단 한 개만 존재.
    - const와 val(value)의 차이
      read only는 같지만 값을 입력하는 시점이 다름
      함수같은데서 수정을 원치 않는 변수를 갖고싶은데, const를 쓰지 못하므로 val을 씀


- struct와 class의 차이점
	접근 지정자를 지정 안했을 때 퍼블릭 프라이빗이 다름

- type of variable
- 형 변환 함수들
- read, write
- Generic
	데이터 type을 추상화하여 타입선언 없이 변수 선언 가능. 
	코드 재사용, 유지보수성 향상
- 엘비스연산자
- 람다, 애로우펑션
  함수가 간단할 때, 표현식을 축약함

- batch


- socket
the part of a piece of equipment, especially electrical equipment, into which another part fits.
접점.

- bus
a set of wires in a computer along which information can be sent to and from other parts of the computer.
컴퓨터의 다른 부분으로 정보를 주고받을 수 있는 전선 세트.
모든 장치가 함께 공유하는 통로. 
데이터도 하나의 버스를 타고 CPU, 메모리, 디스크, I/O 장치 사이를 오감.
ex) Data, Address, Control, I/O
