// Métodos inline implementados dentro da classe

class Point
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	
	inline int ReturnX() {
		return x;
	}
	
	inline int ReturnY() {
		return y;
	}
};

// Métodos inline implementados nos arquivos .cpp

class Point1
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	int ReturnX();
	int ReturnY();
};

// Métodos inline implementados arquivo .h

class Point2
{
private:
	int x;
	int y;

public:
	void MoveTo(int px, int py);
	void Translate(int dx, int dy);
	inline int ReturnX();
	inline int ReturnY();
};

inline int Point::ReturnX() {
	return x;
}

inline int Point::ReturnY() {
	return y;
}