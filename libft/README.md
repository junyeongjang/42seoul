# libft

- libft 테스트 프로그램
  - https://github.com/alelievr/libft-unit-test
  - makefile이 반드시 필요함
- 표준 C 라이브러리의 문자열 처리 함수 **<string.h>**
  - strlen(str); -> str의 길이를 구한다 (null) 문자 제외
  
  - strcpy(dest, strc); -> src를 dest로 복사한다.
  
  - strcmp(lhs, rhs); -> lhs와 rhs를 비교해서 같으면 0을, las > rhs면 0보다 큰 값을 ,lhs < rhs면 0보다 작은 값을 리턴한다.
  
  - strcat(dest, src); -> dest의 끝에 src를 연결한다.
  
  - strchr(str,ch); -> str에서 ch 문자를 찾는0다. **(찾은 문자의 주소 리턴)** 
    
    - str 에서 찾은 문자의 위치를 리턴한다. 만일 찾지 못한다면 널을 리턴한다.
    
  - strrchr(const char * s, int ); -> str에서 마지막으로 있는 문자 c의 포인터를 리턴한다.
  
  - strstr(str, substr); -> str에서 substr 문자열을 찾는다. **(찾은 문자열의 주소 리턴)**
  
  - strtok(str, delim); -> str을 delim을 이용해서 토큰으로 분리한다. **(토큰 문자열 리턴)**
  
  - void *memset(void *b, int c, size_t len); -> 메모리 블럭을. 채운다. b로 시작하는 메모리 주소로 부터 len개의 바이트를 c 값으로 채운다. c는 unsigned char로 형 변환된다.
  
    - b : 값을 채울 메모리의 시작 주소
    - c : 채울 값, 인자로는 int로 전달되지만 함수 내부적으로는 unsigned char로 형변환 되어서 사용된다.
    - Len :  c로 채울 byte 수 
  
  - void bzero (void *s, size_t n)
  
    -  바이트 스트링 s 의 처음 n 바이트를 0으로 채운다. memset(3)과 마찬가지로 메모리를 초기화하기 위한 목적으로 주로 사용된다. 그러나 이함수는 구식이 되었다. bzero 대신 memset(3) 을 사용하도록 하자.
    - memset을 사용해서 구현
  
  - void *memccpy (void *dest, const void *src, int c, size_t n);
  
    - 이 함수는 src에서 dest로 메모리 값을 n만큼 복사하는 것이다. 복사하면서 c를 찾으면 복사를 멈춘다.
  
      만약 메모리 지역이 겹치면 결과를 정의하지 않는다.
  
    - 반환 값 : 만약 c를 찾으면 c 다음 주소 값을 반환하고, src의 값에서 n만큼 중 c를 찾지 못하면 NULL 값을 반환한다.
  
  - void *memmove (void *dest, const void *src, size_t len)
  
    - memmove() 함수는 src 메모리 영역에서 dest 메모리 영역으로 n byte 만큼 복사한다.
    - src 배열은 src와 dest 의 메모리 영역과 겹치지 않는 메모리 영역부터 먼저 복사한다.
    - 반환 값: dest 의 포인터를 반환한다.
  
  - void *memchr(const void *s, int c, size_t n);
  
    - 메모리 블럭에서 문자를 찾는다. 
    - `ptr` 이 가리키는 메모리의 처음 `num` 바이트 중에서 처음으로 `value` 와 일치하는 값의 주소를 리턴한다.
  
  - int memcmp(const void *s1, const void *s2, size_t n);
  
    - 두 개의 메모리 블록을 비교한다.
    - `ptr1` 이 가리키는 처음 `num` 바이트의 데이터와 `ptr2` 가 가리키는 처음 `num` 바이트의 데이터를 비교하여 이들이 같다면 0 을 리턴하고 다르다면 0 이 아닌 값을 리턴한다.
- const char* 형
  - const char* 형의 포인터는 읽기 전용의 문자열 포인터이므로 포인터가 가리키는 문자열의 내용을 읽어볼 수만 있고 변경할 수 없다.
  - 

