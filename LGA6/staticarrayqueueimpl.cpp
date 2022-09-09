#include <iostream>
using namespace std;

#define MAX 100
template <class T>
class iqueue
{
private:
	T _data[MAX];
	int _size;
	int _frontIndex;
	int _backIndex;

public:
	iqueue()
	{
		_frontIndex = 0;
		_backIndex = -1;
		_size = 0;
	}
	int size()
	{
		return _size;
	}
	void enqueue(T item)
	{
		if (this->size() < MAX)
		{
			_backIndex++;
			_data[_backIndex] = item;
			_size++;
		}
		else
			cout << "Cannot enqueue. Queue full." << endl;
	}
	T dequeue()
	{
		// Your code here
		if(this->empty()) {
			cout << "Nothing to remove"
			return;
		}

		_data[_frontIndex] = NULL;
		_frontIndex++;
		_size--;


	}
	bool empty()
	{
		if (this->size() == 0)
			return true;
		else
			return false;
	}
};