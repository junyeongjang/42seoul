# Netwhat

- 기간	
  - 2021/04/10 ~ 2021/04/22  

---

### netwhat 문제

- What is an IP address
  - IP(Internet Protocol address)

  - 컴퓨터 네트워크에서 장치들이 서로를 인식하고 통신을 하기 위해서 사용하는 특수한 번호

  - OSI 7계층에서 **Netwoark Layer**에 위치하는 **프로토콜**

  - 호스트에서 호스트까지의 통신, 즉 보내는 컴퓨터에서 받는 컴퓨터까지 통신을 책임진다.

  - IP주소

    - 2010년 기준 IPv4와 IPv6 두 가지 체계가 있다.
    - IPv4

      - 널리 사용되는 IP 주소로, 32비트의 값을 가진다. 보통 8비트씩 끊어 이를 0~255의 10진수 숫자로 나타내며, 각 숫자는 점(.)으로 구분한다.
      - 총 **32bits**의 정보를 가지므로 최대 232개, 약 43억개[[3\]](https://namu.wiki/w/IP#fn-3)의 고유한 주소를 부여할 수 있다.
    - IPv6

      - **128bits**의 값을 가진다. 일반적으로 4자리의 16진수 숫자 8개로 표기하고, 각각은 쌍점(:)으로 구분한다.
      - IPv6은 IPv4 주소의 고갈을 앞두고 차기 주소 체계로서 고안되었으며, 조금씩 적용 사례가 늘고 있다. 
    - ![](/Users/jangjun-yeong/Documents/GitHub/42seoul/netwhat/img/ipv6.jpeg)
    - ip 클래스 
    - 클래스 장점: 기존에 비해 더욱 커진 네트워크 표시 영역은 더 많은 수의 네트워크를 가능하게 해주었고, 이로 인해 임시적이나마 [인터넷](https://ko.wikipedia.org/wiki/인터넷)의 지속적인 성장을 유지할 수 있었다
    - ![class](/Users/jangjun-yeong/Documents/GitHub/42seoul/netwhat/img/class.png)
    - IP 클래스는 위의 사진과 같이 총 5개가 있는데, A,B,C 정도만 알고있으면 충분함
    - A 클래스
      - 하나의 네트워크가 가질 수 있는 호스트 수가 제일 많은 클래스
      - 맨 앞자리 수가 항상 0bit인 경우
      - IP 주소 중 1.0.0.0~126.0.0.0 (1부터 126으로 시작하는 네트워크는 A클래스)
      - 호스트 주소가 가질 수 있는 갯수는 (2^24) - 2 (모두 1일 때는 브로드캐스트 주소, 모두 0일 때는 네트워크 주소로 사용하기 때문)
    - B 클래스
      - 맨 앞자리 수가 항상 10bit인 경우
      - 네트워크 주소 범위 : **10xx xxxx.xxxx xxxx**/ xxxx xxxx xxxx xxxx  => 2^14
      - 호스트 주소 범위 10xx xxxx.xxxx xxxx/ **xxxx xxxx xxxx xxxx** 네트워크 주소인 앞 16자리를 제외한 (2^16) -2
    - C 클래스
      - 맨 앞자리 수가 항상 110bit인 경우
      - 네트워크 주소 범위는 **110x xxxx.xxxx xxxx.xxxx xxxx.**xxxx xxxx => (2^21)
      - 호스트 주소 범위는 **110x xxxx.xxxx xxxx.xxxx xxxx**.**xxxx xxxx** => (2^8) -2 개

- - What is a Netmask

  - 네트워크 주소 부분의 비트를 1로 치환한 것
  - IP주소와 넷마스크를 AND연산 하면 네트워크의 주소를 얻을 수 있다.

- What is the subnet of an IP with Netmask

- What is the broadcast address of a subnet

- What are the different ways to represent an ip address with the Netmask

- What are the differences between public and private IPs

- What is a class of IP addresses

- What is TCP

- What is UDP

- What are the network layers

- What is the OSI model

- What is a DHCP server and the DHCP protocol

- What is a DNS server and the DNS protocol

- What are the rules to make 2 devices communicate using IP addresses

- How does routing work with IP

- What is a default gateway for routing

- What is a port from an IP point of view and what is it used for when connecting to another device