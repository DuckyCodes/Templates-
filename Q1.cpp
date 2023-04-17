
#include <iostream>
using namespace std;
//Write a template for a function called total.
template<class T> class Total
{

/* The function should calculate the sum of all
members of an array and return the total. The arguments sent into the function are the array
and the number of elements. */
protected:

	int size;
	T *array;
	
public:
	
	Total(T);
	~Total();
	void input();
	void output();
	T sum();
};

template<class T> Total<T>::Total(T x)
{
	
	array = new T[x];
	size = x;
	
}
template<class T>Total<T>::~Total()
{
	delete [] array;
}
template<class T> T Total<T>::sum()
{
	T sum =0;
	for (int i = 0; i < size;i++)
	{
		sum += array[i];
	}
	
	return sum;
	
}
template<class T>void Total<T>::input()
{
	int i = 0;
	while (true)
	{
		
		
		if (i >= size)
			break;
			cin >> array[i];
		i++;
	}
}
template<class T>void Total<T>::output()
{
	for (int i = 0; i < size;i++)
	{
		cout<<"Number" <<i+1<< endl;
		cout<<array[i]<<endl;
	}

	
	
}
int main()
{
	Total< double > x(7);
	x.input();
	x.output();

	cout<<x.sum()<<endl;
	/*Test the template in a simple main function that sends arrays of
	integersand doubles as argumentsand displays the results*/
}


