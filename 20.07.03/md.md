<h1> 원시 자료형
<h3>

Number 타입 
- 정수 표현

string 타입(문자열)
- 텍스트 데이터를 나타낼때 사용

Undefined 타입
- 값을 할당하지 않은 변수는 undefined의 값을 가짐

Boolean 타입
- ture와  false로 두가지의 값을 가짐

Null 타입
- 한 가지 값
symbol
- 유일하고 변경 불가능한 기본 값
***
<h1>객체(Objects)란?

<h3>데이터를 담는 그릇(배열), 속성을 담고있는 가방

<h2>데이터 속성(Data property)
<br>

특성 | 자료형 | 설명 | 기본값
---|:---:|:---:|---:
`[[value]]`|자바스크립 타입 모두 가능 | get 접근으로 반환되는 값|`undefined`
`[[Writable]`|Boolean| false 라면, [[value]]을 바꿀 수 없음 | `false`
`[[Enumerable]]`|Boolean|true 라면, 이 속성은 for...in 루프에서 열거될 수 있음|`false`
`[[configurable]]`|Boolean|false 라면, 이 속성은 제거될 수 없고, [[Value]]와 [[Writable]] 외에는 수정될 수 없음|`false`

***

<h2> 접근자 속성(Accessor property)

<h3>값을 가져오거나 저장하기 위해 접근자 함수(get, set)를 연결 짓는다.

특성 | 자료형 | 설명 | 기본값
---|:---:|:---:|---:
`[[Get]]`| Function, undifined| 접근할 때만다 함수가 호출되고 반환된 값으로 속성값을 가져옴|`undefined`
`[[set]]`|Function, undifined| 값이 바뀌려고 할 때마다 할당된 값으로 인자 함수 호출|`undefined`
`[[Enumerable]]`|Boolean|	true 라면, 이 속성은 for...in 루프에서 열거|`false`
`[[Configurable]]`|Boolean|	false 라면, 이 속성은 제거될 수 없고, 데이터 속성을 수정할 수 없음|`false`

