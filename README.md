# インクリメント演算子を作ってみる
## 下記クラスに、前置・後置それぞれの++演算子を追加せよ
```
class CoordinateX {
public:
	CoordinateX(int x) : value(x) {}
	int Value() {return value;}

private:
	int value;
};
```

## 注意事項
GoogleTestのテストコードも併せてrepositoryに格納すること。また、TestFirstで作業すること。
従って、以下のような順のコミット履歴になるイメージです。
1. 冒頭に書いた`CoordinateX`クラス
2. 中身が空の++演算子が追加され、テストケースが書かれた状態(テストはNGになる)
3. ++演算子の中身が実装され、テストが通る状態
