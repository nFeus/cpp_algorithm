
1. `string s;` 가 있을 때 `s` 안에 값이 들어있는지 확인하려면 `s.size()`를 이용한다.


```c++
if(s.size()) cout << "문자가 존재합니다." << "\n";
else cout << "문자가 존재하지 않습니다." << "\n";
```


2. 처음에 선수들의 성을 받을 때 전체의 문자열을 저장하지 말고 제일 앞글자만 저장하는 것이 메모리 낭비가 덜하다.