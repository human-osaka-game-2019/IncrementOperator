#ifndef COORDINATE_X_H_
#define COORDINATE_X_H_

class CoordinateX {
public:
	CoordinateX(int x);
	int Value() { return value; }

	/**
	 * @brief	インクリメント演算子(前置)
	 * @returns	自分自身
	 */
	CoordinateX& operator++();

	/**
	 * @brief	インクリメント演算子(後置)
	 * @returns	インクリメント前のインスタンス
	 */
	CoordinateX operator++(int);

private:
	int value;
};

#endif
