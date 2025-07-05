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


