// Self implementation of
// the Vector Class in C++

#include <iostream>
using namespace std;
template <typename T> class Vector
{

	T* arr;
	int capacity;
	int currentSize;

public:
	Vector()
	{
		arr = new T[1];
		capacity = 1;
		currentSize = 0;
	}
	
	Vector(T* data, int n){
	  capacity = n;
	  T* temp = new T[capacity];
	  for(int i=0; i<n; i++){
	    temp[i] = data[i];
	  }
	  currentSize = n;
	  arr = temp;
	}

	void push_back(T data)
	{

		if (currentSize == capacity) {
			T* temp = new T[2 * capacity];

			for (int i = 0; i < capacity; i++) {
				temp[i] = arr[i];
			}

			delete[] arr;
			capacity *= 2;
			arr = temp;
		}

		arr[currentSize] = data;
		currentSize++;
	}

	void push_back(T item, int index)
	{
		if (index == capacity)
			push_back(item);
		else
			arr[index] = item;
	}

	T get(int index)
	{

		if (index < currentSize)
			return arr[index];
	}

	void pop_back() { currentSize--; }

	int size() { return currentSize; }

	int getcapacity() { return capacity; }

	void print()
	{
		for (int i = 0; i < currentSize; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}
};

int main()
{
  int nums[] = {1, 2, 3};
	Vector<int> v(nums, 3);
	Vector<char> v1;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	v1.push_back(71);
	v1.push_back(72);
	v1.push_back(73);
	v1.push_back(74);

	cout << "Vector size : " << v.size() << endl;
	cout << "Vector capacity : " << v.getcapacity() << endl;

	cout << "Vector elements : ";
	v.print();

	v.push_back(100, 1);

	cout << "\nAfter updating 1st index" << endl;

	cout << "Vector elements of type int : " << endl;
	v.print();
	cout << "Vector elements of type char : " << endl;
	v1.print();
	cout << "Element at 1st index of type int: " << v.get(1)
		<< endl;
	cout << "Element at 1st index of type char: "
		<< v1.get(1) << endl;

	v.pop_back();
	v1.pop_back();

	cout << "\nAfter deleting last element" << endl;

	cout << "Vector size of type int: " << v.size() << endl;
	cout << "Vector size of type char: " << v1.size()
		<< endl;
	cout << "Vector capacity of type int : "
		<< v.getcapacity() << endl;
	cout << "Vector capacity of type char : "
		<< v1.getcapacity() << endl;

	cout << "Vector elements of type int: ";
	v.print();
	cout << "Vector elements of type char: ";
	v1.print();

	return 0;
}
