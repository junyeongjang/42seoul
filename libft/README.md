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
- const char* 형
  - const char* 형의 포인터는 읽기 전용의 문자열 포인터이므로 포인터가 가리키는 문자열의 내용을 읽어볼 수만 있고 변경할 수 없다.
  - 

