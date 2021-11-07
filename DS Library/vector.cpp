// Self implementation of
// the Vector Class in C++

#include <iostream>
#include <limits.h>

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
	
	Vector(T* data, int n)
	{
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

    int front() 
    { 
	  if(currentSize == 0) { return 0; }
	  return arr[0];
	}
	
	int end()
    {
	  if(currentSize == 0) { return 0; }
	  return arr[currentSize-1];
	}

    int max()
    {
        int max = INT_MIN;
        for(int i = 0; i < currentSize; i++)
        {
            if(arr[i] > max)
            {
                max = arr[i];
            }
        }
        return max;
    }

    int min()
    {
        int min = INT_MAX;
        for(int i = 0; i < currentSize; i++)
        {
            if(arr[i] < min)
            {
                min = arr[i];
            }
        }
        return min;
    }

	void printReverse() 
	{
		for(int i = currentSize-1; i >= 0; i--)
		{
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	// TODO: Complete following function.
	T* reverse()
	{	
		T reversed[] = new T[currentSize];
		for(int i = currentSize-1; i >= 0; i--)
		{
			reversed[currentSize-i] = arr[i];
		}
		return reversed;
	}

    // TODO: Implement Sort.
    // void sort() { }

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
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);

	cout << "Vector size : " << v.size() << endl;
	cout << "Vector capacity : " << v.getcapacity() << endl;

	cout << "Vector elements : ";
	v.print();

	v.push_back(100, 1);

	cout << "\nAfter updating 1st index" << endl;

	cout << "Vector elements: " << endl;
	v.print();
	
	cout << "Element at 1st index: " << v.get(1) << endl;


	v.pop_back();
	
	cout << "\nAfter deleting last element" << endl;

	cout << "Vector size: " << v.size() << endl;
	
	cout << "Vector capacity: " << v.getcapacity() << endl;


	cout << "Vector elements: ";
	v.print();

	cout << "Vector elements reversed: ";
	v.printReverse();
	
	cout << "Front Vector element: " << v.front();
	cout << endl;
    cout << "Back Vector element: " << v.end(); 
    cout << endl;
    cout << "Max Vector element: " << v.max();
    cout << endl;
    cout << "Min Vector element: " << v.min();
	cout << endl;


	return 0;
}


// // Updated push_back
// void push_back( const Object & x )
//     {
//         if( theSize == theCapacity ) ➀
//             reserve( 2 * theCapacity + 1 ); ➁
//         objects[ theSize++ ] = x;
//     }

// void reserve( int newCapacity )
//     {
//         if( newCapacity < theSize )  ➀
//             return;

//         Object *newArray = new Object[ newCapacity ]; ➁
//         for( int k = 0; k < theSize; ++k )            ➂
//             newArray[ k ] = std::move( objects[ k ] );

//         theCapacity = newCapacity;
//         std::swap( objects, newArray );   ➃
//         delete [ ] newArray;              ➄
//     }
