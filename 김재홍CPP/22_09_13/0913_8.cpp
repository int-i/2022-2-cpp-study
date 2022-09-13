/*
복사생성자의 경우 얕은 복사가 일어나지 않도록 한다.
*/

/*
Shape::Shape(const shape &s)
{
	cout << "복사 생성자 호출됨" << endl;
	price = s.price;
	x = s.x;
	y = s.y;
	owner = new char[strlen(s.owner) + 1];
/*

Shape::Shape(const Shape& s)
{
	cout << "복사 생성자 호출됨 " << endl;
	owner = new char[strlen(s.owner) + 1];
	strcpy(owner, s.owner);
}

*/
