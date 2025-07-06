# Infrastructure

1. 개념
on-Premise(전통적인 환경)
자체적으로 데이터센터 및 서버, 네트워킹을 구축, 운용 관리

Private Cloud
Cloud를 on-Premise처럼 기업이 "직접" 구축, 운용, 관리, 이용

Public Cloud
IT Infra를 CSP에서 구축, 운영, 관리하여 제공
-> 기업이 신경 쓸 필요 없다


cloud service
saas? paas?

2. 요소?

데이터센터
물리 장비가 구축, 운용되는 시설
서버, 스토리지, 스위치

Rack
장비가 mount되는 선반. 
Unit단위로 서버가 들어감. 서버의 크기를 말할 때 쓰임.


서버 : 네트워크를 통해 클라이언트에게 정보를 제공하는 컴퓨터 시스템.

서버의 구성요소
Disk : 서버 OS용과 데이터용 따로 구축
Display : 서버 내 부품들 상태 확인용
UID Button : 작업 중인 물리서버 표시
NIC(Network Interface Controller) : 네트워크 이중화(다중화, Teaming or Bonding)로 대역폭 및 가용성(고장 시) 확장
IPMI : 서버 원격 관리(이벤 로그 등) 인터페이스. 전용 스위치를 통해 구축. 


Bare Metal Server
Bare Metal = 맨 금속
가상화가 되지 않은 물리 서버 전체를 사용자에게 전용으로 제공하는 서버

Virtualized Server
서버 리소스를 VM인스턴스를 통해 제공
HW -> Hypervisor -> VM -> OS -> ... 순으로 올라감
HW는 Cluster로 묶여 제공됨 



# Strorage
RAID : 여러 디스를 묶어 하나의 디스크처럼 사용. 안정성 증가
Disk Array : 여러 개의 물리 디스크를 하나의 논리 장치처럼 묶어놓은 것. 하나의 논리 구조 단위.
Array Controller : RAID를 hardware 수준에서 구성

RAID 0 : Striping, 데이터 세그먼트를 여러 디스크 디바이스에 분산 기록. 가용용량 그대로 합산. 
왜 Striping? 특정 데이터를 여러 디스크에 분산 저장 -> 병렬 처리 가능(I/O good) but 특정 디스크 fault 시 데이터 손실됨.

RAID 1 : Mirroring, 같은 데이터 세그먼트를 여러 디스크에 복제 후 분산 저장. 가용용량 1/2

RAID 5 : Parity, "원본 데이터 + parity" 크기의 데이터를 Striping 방식으로 저장. 단, parity가 저장된 디스크에는 원본 데이터가 저장되면 안된다. 가용용량 전체 디스크 - parity disk. 디스크 많을 경우 위험.

RAID 6 : 데이터마다 parity 2개 구성하여 2개의 디스크가 깨져도 복구가능. 가용용량 전체 디스크 - 2 parity.

( RAID[하위array][상위array] )
RAID 10 : RAID 1로 묶인 Array들을 RAID 0으로 묶는다.
RAID 01 : 디스크 고장 시 RAID 0에 묶인 디스크(하위 array)가 고장난다는 뜻이므로, 디스크 교체 + RAID 0 작업 + 미러링 작업까지 해야하므로 잘 안쓰인다.


Hot Spare : 스페어 array. 장애 발생 시 hot spare에 데이터 카피 후 멤버 디스크로 편입.
rebuilding : 한 디스크에 고장난 디스크의 데이터를 build.

JBOD : 걍 하나로(일자로) 뭉쳐놓은거. I/O bad but fault된 disk만 loss 발생




DAS : 서버와 스토리지가 케이블로 직접 연결됨. 각 서버가 파일시스템 관리 필요 ex) pc에 외장하드
NAS : 서버와 스토리지가 네트워크로 연결됨(물리장비가 서로 별도로 있음). 파일 서버가 스토리지의 파일 시스템 관리 -> 다수의 서버가 하나의 스토리지에 접근해야 할 때
SAN : 서버와 스토리지가 스위치로 연결됨(고속). 여러 스토리지를 하나로 묶어 관리하므로 확장 용이.




저장 방식
파일 : 사람이 쉽게 접근 가능. 특정 디렉토리에 단일 정보로 저장됨. 파일 경로가 길어지면 힘듬. DAS, NAS.

블록 : VM이나 App이 효율적으로 접근가능 -> 빠른 검색 가능. 파일 시스템이 붙어있지 않아서 여러 OS에서 원하는 파일 시스템으로 마운트 가능. 데이터 분리 후 각 블록에 고유 식별자 붙여서 분리 저장. 단일 경로에 종속되지 않음. 메타데이터 관리 힘듬 .SAN. 

object storage : 비정형 데이터 저장. 클라우드에서 많이쓰임. Object 단위(데이터 + 메타데이터). 파일은 최대 용량이 제한되어있으나 오브젝트는 없음. flat한 저장 형태 -> 계층적 저장에 비해 빠른 검색. 서버 및 디스크가 클러스터로 묶여서 구성되므로 확장 용이 -> 사실상 파일 크기 및 갯수 제한 x. 

SDS : software defined storage. 기존 환경은 하드웨어 구성에 따라 소프트웨어가 강제되었으나, SDS는 하드웨어 종류에 구애받지 않고 스토리지를 관리 및 확장.


* 나열된 장점마다 왜 그런지 분석하면 이해가 쉬울듯?


HCI : 인프라 스택 통합 기술

