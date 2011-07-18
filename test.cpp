/*
 * Test.c++
 *
 *  Created on: Jul 13, 2011
 *      Author: Kaustubh
 */


#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iomanip>
using namespace std;


class test
{

	private :

	char *p, *q;

	public:

	test(char *p)
	{
		while(*p)
		{
			*q = *p;
			cout<< *p++;// << " " << *q++;

		}
	}
	void getdata(void)
	{
		cout<< "Please enter the string" << endl;
	}



	void display(void)
	{
		while(*q)
		{
			cout << *q;
		}
	}

};


int main(void)
{
	test a("This is test");

	return 0;
}




/*
int main(void)
{
	int arr[5]= {1,2,3,4,5};

	int *p,i;

	p = arr;

	for(i=0;i<5;i++)
	{
		cout << *p;
		p++;
	}

	return 0;
}

*/



/*

class base
{

	public:

	virtual void fun(void)
	{

		cout << "This is the output of the virtual function of the base class " << endl;

	}


};

class in_base : public base
{


	protected :
	base *b,p;

	public:

	in_base()
	{
		b = &p;

		b->fun();
	}

	void fun(void)
	{

		cout << "I am in the fun() of in_base class  " << endl;
	}


};


int main(void)
{

	in_base ib;

	return 0;
}


*/


/*
int main(void)
{


#if 0
	int i = 4;

	cout << (i==4) << endl;
#endif

	enum col{red , blue, yellow, pink, black};

	col shirt, pant;

	shirt = red;
	pant  = pink;

	cout << shirt << "   " << pant;

	return 0;
}
*/


/*

class shape
{
	protected:

	int rad;
	int ln;
	int br;

	public:


	shape()
	{
		cout << "i am in the shape" << endl;
	}

	void display(void)
	{

		cout << "The length of shape is "<< ln << " and breadth of shape is " << br << endl;
	}


	#if 0
	shape( int a, int b)
	{
		ln = a;
		br = b;

		cout<<"The length of the shape is "<< a <<endl;
		cout<<"The breadth of the shape is "<< b <<endl;
	}

	shape(int r)
	{
		rad = r;
		cout<<"The radius of the circle is " << r  << endl;
	}
    #endif
};

class rectangle:public shape
{
	public:

	rectangle(int a, int b)
	{
		ln = a;
		br = b;

		shape::display();
	}


	void perimeter(void)
	{
		cout << "The perimeter of the rectangle is " << (2*(ln+br)) << endl;

	}

	void area(void)
	{
		cout << "The area of the rectangle is " << (ln*br) << endl;

	}

};

class square : public shape
{
	public:

	square(int a, int b)
	{
		ln = a;
		br = b;

		shape::display();
	}


	void perimeter(void)
	{
		cout << "The perimeter of the square is " << (2*(ln+br)) << endl;
	}

	void area(void)
	{
		cout << "The area of the square is " << (ln*br) << endl;

	}

};

class circle : public shape
{
public:

	circle(int r)
	{

		rad = r;
	}

	void perimeter(void)
	{
		cout << "The perimeter of the circle is " << (2*3.14*rad) << endl;
	}

	void area(void)
	{
		cout << "The area of the circle is " << (3.14 * rad * rad) << endl;

	}


};


int main(void)
{
	rectangle r(10,30);
	square s(20,50);
	circle c(50);


	r.perimeter();
	r.area();

	s.perimeter();
	s.area();

	c.perimeter();
	c.area();

	return 0;
}


*/


/*
int main(void)
{

	int i, j , n, k;

	cout << "Please enter the number" << endl;
	cin >> n;

	for(i=0; i< n; i++)
	{
		for(j=0; j<i; j++ )
		cout<< " ";

		for(k=0; k<n-i; k++)
		cout<<"*";

		cout<< endl;
	}



	return 0;
}

*/



/*
int main(void)
{
	int i , j, n;
	cout << "Please enter the number " << endl;
	cin>> n;

	for(i=0; i<n; i++)
	{
		for(j=0; j < n - i; j++)
		{

			cout << "*";

		}
		cout << endl;
	}




	return 0;
}

*/


/*

Friend Function iamfriend();


class two;
class one
{
	private :

	int data1;

	public:

	one()
	{
		data1 = 100;
	}

	friend int iamfriend(one,two);
};

class two
{
	private:

	int data2;

	public:

	two()
	{
		data2 = 200;
	}

	friend int iamfriend(one,two);

};

int iamfriend(one a, two b)
{
	return (a.data1 + b.data2);

}

int main(void)
{

	one a; two b;

	cout << iamfriend(a,b);

	return 0;
}

*/
/*
class carburretor
{
	private:

	char type;
	float cost;
	char mfr[30];

	public:

	void setcarbudata(char t, float c, char *m)
	{
		type = t;
		cost = c;
		strcpy(mfr,m);

	}

	void display(void)
	{

		cout << endl << type << endl << cost << endl << mfr;
	}

	float getcost(void)
	{
		return cost;
	}

};


class car
{
	private:

	char model[25];
	char drivetype[20];

	carburretor cc;

	public:
	void setdata(char t, float c, char *mf,char *m, char *d)
	{

		strcpy(model,m);
		strcpy(drivetype, d);
		cc.setcarbudata(t,c,mf);
	}

	void display(void)
	{

		cout<<endl<<model<<endl<<drivetype;
		cc.display();
	}

	float getcost(void)
	{
		return 2*cc.getcost();
	}


};


int main(void)
{
	car mc;

	mc.setdata('A', 78.89, "Mahindra", "sports", "4w_wheel");
	mc.display();

	cout<<endl<<mc.getcost();

	return 0;
}




*/





/*

Classes within classes

class carburretor
{
	private:

	char type;
	float cost;
	char mfr[30];

	public:

	void setdata(char t, float c, char *m)
	{
		type = t;
		cost = c;
		strcpy(mfr,m);

	}

	void display(void)
	{

		cout << endl << type << endl << cost << endl << mfr;
	}

};


class car
{
	private:

	char model[25];
	char drivetype[20];

	public:
	void setdata(char *m, char *d)
	{

		strcpy(model,m);
		strcpy(drivetype, d);
	}

	void display(void)
	{

		cout<<endl<<model<<endl<<drivetype;
	}

	carburretor c;


};

int main(void)
{
	car mc;
	mc.c.setdata('A', 850.89, "mahindra");
	mc.setdata("sports", "4w-car");

	mc.c.display();
	mc.display();



	return 0;
}

*/


/*
1.
If a single class is derived from the two base classes(having same parent class for these two)
then those two classes should be virtual to let the derived class know which of two base class
copy to use to access the member of their parent class

class base
{

	protected :
	int data;

	public:
	base()
	{

		data = 500;
	}

	void fun(void)
	{

		cout << "I am in the base::fun()" << endl;
	}


};

class in_one: virtual public base{};
class in_two: virtual public base{};

class in_three:public in_one,public in_two
{

	public:
	int getdata(void)
	{
		return data;
	}

};


int main(void)
{
	in_three it;
	int a;

	a = it.getdata();
	it.fun();
	cout<< "The val of a is " << a << endl;
	return 0;
}





*/















/*
class one
{
	public :
	virtual void fun1(void)
	{
		cout << "I am in the base one" << endl;

	}

	// Un-comment this if pointer type casting is not used for derived class
	//virtual void fun2(void)
	//{
	//	cout << "I am in the virtual fun 2 of base one" << endl ;
	//}

};

class in_one:public one
{

	public:
	void fun1(void)
	{
		cout << "I am in derived class function fun1()  " << endl;

	}

	virtual void fun2(void)
	{

		cout << "I am in derived clss function fun2() "<<endl;
	}



};

int main(void)
{
	one *o1, *o2;
	one o;

	in_one io;

	o1 = &o;
	o2 = &io;

	o1->fun1();
	o2->fun1();


	//((in_one*)o2)->fun2(); // Un comment this when no virtual class fun2() in base
	//o2->fun2();  // This statement will be an error if there is no virtual fun2() in the base class



	return 0;
}

*/





/*
class vehicle
{
	public :

	virtual void speed(void)
	{
		cout<< "I am in the speed of vehicle" << endl;

	}

	virtual void maintenance(void)
	{
		cout << "I am in the maintenance of vehicle " << endl;

	}

	void value(void)
	{
		cout << "I am in the value of the vehicle" << endl;

	}


};


class fourwheeler:public vehicle
{

	public:
	void speed(void)
	{
		cout<< "I am in the speed of the fourwheeler" << endl;
	}

	void maintenance(void)
	{
		cout << "I am in the maintenance of the four wheeler"<<endl;
	}

};

class twowheeler: public vehicle
{

	public:
		void speed(void)
		{
			cout<< "I am in the speed of the four wheeler" << endl;
		}

		void maintenance(void)
		{
			cout << "I am in the maintenance of the four wheeler"<<endl;
		}

		void value(void)
		{

			cout << "I am in the value of the four wheeler" << endl;
		}



};


class airborne:public vehicle
{
	public:
	void speed(void)
	{
		cout<< "I am in the speed of the four airborne" << endl;
	}

};


int main(void)
{
	vehicle *v1,v;

	v1 = &v;

	v1->speed();
	v1->maintenance();
	v1->value();

	vehicle *v2, *v3, *v4;

	fourwheeler maruti;
	twowheeler bajaj;
	airborne  jambo;

	v2 = &maruti;
	v3 = &bajaj;
	v4 = &jambo;

	v2->speed();
	v2->maintenance();

	v3->speed();
	v3->maintenance();

	v4->speed();
	v4->maintenance();

	v2->value();
	v3->value();

	vehicle w;
	w.speed();

	fourwheeler f;
	f.speed();

	airborne a;
	a.maintenance();


	return 0;
}
*/












/*

1.size of object of class having virtual function = 8b (4b int + 4b void pointer of virtual fun)
2.size of object of class having only int = 4b (4b int only)
3.size of object of class trial is 1b (It should be 0 but that is not possible thats why least non zero value )

where:
b-bytes


class sample
{
	private :
	int i;

	public:
	virtual void display(void)
	{

		cout << "I am in the sample class" << endl;
	}
};


class example
{
	private : int i;

	public:

	void display(void)
	{

		cout << "I am in the example class" << endl;

	}


};


class trial
{
	public:

	void display(void)
	{

		cout << "I am in the trial class" << endl;
	}


};


int main(void)
{
	sample s; example e; trial t;


	cout << sizeof(s) << endl << sizeof(e) << endl << sizeof(t) << endl ;


	return 0;
}

*/



















/*


we can not create an object of the base class which is having pure
virtual function.

class base
{
	public:
	virtual void display(void)=0; // pure virtual function declaration.
};

class in_base:public base
{

	public:
	void display(void)
	{
		cout<< "I am in the in_base class" << endl;
	}

};


int main(void)
{
	base b; /// (*b);
	in_base ib;
	//b = &ib;

	//b->display();

	return 0;
}
*/






/*
 Virtual class: ex9

compare this example with ex8
1.
The word virtual tell the compiler that it should not perform the early binding.
Instead it automatically install all mechanism necessary to perform late binding.


class one
{

	public:
	virtual void display(void)
	{

		cout<< "I am in the base class one" << endl;
	}


};


class in_oneofone : public one
{
	public:
	void display (void)
	{
		cout<< "I am in the derived class in_oneofone" << endl;

	}



};

class in_twoofone: public one
{
	public:
	void display(void)
	{
		cout<< "I am in the derived class in_twoofone"<< endl;

	}
};


int main(void)
{

	one *o,p;
	in_oneofone o1;
	in_twoofone o2;

	o = &o1;
	o->display();

	o = &o2;
	o->display();

	o = &p;
	o->display();
	return 0;
}

*/

















/*
 Pointer and inheritance ex8 :

 1.
 The rule is that pointers to the objects of the derived class are type
 compatible with the pointer to the object of base class

 2.
 Here the pointer will take the address of the derived class objects but
 it treats it as a address of the base class object.

 3.
 Thus the output of the program is always
  "I am in the base class one" display() function in base class.

class one
{

	public:
	void display(void)
	{

		cout<< "I am in the base class one" << endl;
	}


};


class in_oneofone : public one
{
	public:
	void display (void)
	{
		cout<< "I am in the derived class in_oneofone" << endl;

	}



};

class in_twoofone: public one
{
	public:
	void display(void)
	{
		cout<< "I am in the derived class in_twoofone"<< endl;

	}
};


int main(void)
{

	one *o;
	in_oneofone o1;
	in_twoofone o2;

	o = &o1;
	o->display();

	o = &o2;
	o->display();

	return 0;
}


*/









/*
 *
 * Private inheritance ex7

class test
{

	public:

	void display(void)
	{
		cout << "I am in display" << endl;
	}

	void show(void)
	{

		cout<< " I am in show" << endl;
	}

};

class in_test:private test
{
	public:
	test::display;
	test::show;

};

int main(void)
{
	in_test i;

	i.display();
	i.show();
	return 0;
}

*/
















/* Inheritance ex6
 * Two base classes and constructor

class one
{

	private: int a,b;

	public:

	one()
	{
		a = b = 0;
	}

	one(int i , int j)
	{
		a = i;
		b = j;
	}

	void display(void)
	{
		cout << "The val of a is " << a << " and val of b is " << b << endl;
	}



};

class two
{

	private :
	int m , n;

	public:

	two()
	{

		m = n = 0;
	}

	two (int a , int b)
	{
		m = a;
		n = b;

	}

	void display(void)
	{
		cout<< "The val of m is " << m << " and val of n is " << n << endl;
	}

};

class one_two:private one, private two
{

	private :


	public:
	one_two(int i, int j, int a, int b):one(i,j),two(a,b)
	{

	}

	void oper(void)
	{
		one::display();
		two::display();
	}


};

int main(void)
{
	one_two ot(1,2,3,4);

	ot.oper();
	return 0;
}
*/











/*
  Hirarchial Inheritance ex5

class input
{

	protected:
	int i; int j;

	public:
	void setval(void)
	{

		cout<< endl << "Enter the value of i" << endl;
		cin>> i;
		cout<< endl << "Enter the value of j" << endl;
		cin>> j;


	}


	public:

	input()
	{
		i = j = 0;
	}


	void display(void)
	{

		cout << endl << "The value of i = " << i << " and value of j = " << j << endl;

	}


};



class operation_add:public input
{

	protected:
	int m;

	public:
	operation_add()
	{
		m = 0;
	}

	void add(void)
	{
		m = i + j;
		cout<< endl << "The value of addition m  = " << m << endl;
	}


};

class operation_square: public operation_add
{
	public:

	void square(void)
	{
		input::setval();
		operation_add::add();
		m = m*m;
		cout<<"The square of addition is m = " << m << endl;
	}

};

int main(void)
{

	operation_square os;
	os.square();
	return 0;
}

*/















/*
Inheritance ex4
class linklist
{

	protected :

	struct node
	{
		int data;
		node *link;

	}*p;

	public:

	linklist()
	{
		p = NULL;
	}

	~linklist()
	{
		node *t;
		while(p != NULL)
		{

			t = p;
			p = p->link;
			delete t;

		}

	}

	void append(int num);
	void addatbeg(int num);
	void addafter(int c,int num);


};

void linklist::append(int num)
{
	node *q,*t;

	if(p == NULL)
	{
		p = new node;
		p ->data = num;
		p->link = NULL;
	}
	else
	{
		q = p;

		while(q->link != NULL)
		{
			q = q->link;
		}

		t = new node;
		t->data = num;
		t->link = NULL;

		q->link = t;
	}


}

void linklist::addatbeg(int num)
{

	node *q;

	q = new node;

	q->data = num;
	q->link = p;

	p = q;

}


void linklist::addafter(int c, int num)
{
	node *q, *t;
	int i;
	q = p;

	for(i=1; i<c; i++)
	{
		q = q->link;

		if(q->link == NULL)
		{
			cout << endl << "There are no " << c << " items" <<endl;
		}
	}

	t = new node;
	t->data = num;
	t->link = q->link;
	q->link = t;


}


class in_linklist:public linklist
{
	public :

	void display(void);
	void count(void);
	void delt(int num);

};

void in_linklist::display(void)
{

	node *q;

	for(q=p; q!=NULL; q = q->link)
	{
		cout << q->data << "  ";
	}

	cout << endl;

}

void in_linklist::count(void)
{
	node *q;
	int count=1;

	for(q=p; q->link != NULL; q = q->link)
	{
		count++;
	}

	cout << "There are " << count << " nodes in the list" << endl;

}

void in_linklist::delt(int num)
{

	cout << endl << "I am in delt" << endl;
	node *q, *temp;

	q = p;

	if(q->data == num)
	{
		p = q->link;
		delete q;
		return;
	}

	temp = q;

	while(q!=NULL)
	{

		if(q->data == num)
		{
			temp->link = q->link;
			delete q;
			return;
		}
		temp = q;
		q=q->link;

	}

	cout<< "Element " << num << " not found"<< endl;



}

int main(void)
{

	in_linklist l;

	l.append(10);
	l.append(10);
	l.append(10);

	l.display();
	l.count();

	l.addatbeg(1);
	l.display();
	l.count();

	l.addatbeg(2);
	l.display();
	l.count();

	l.addafter(2,45);
	l.display();
	l.count();

	l.addafter(10,100);
	l.display();
	l.count();

	l.delt(45);
	l.display();
	l.count();

	l.delt(1000);
	l.display();
	l.count();

	return 0;

}
*/















/*
Inheritance ex3


class one
{

	private:
	int a;

	protected:
	int b;

	public:
	int c;

};

class in_one:public one
{

	public:

	void fun()
	{
		int x;

		//x = a;   private variable : not accessible
		x = b;
		x = c;

	}

};

class in_two:private one
{
	public:

	void fun()
	{
		int x;

		//x = a;
		x = b;
		x = c;

	}
};

int main(void)
{
	int z;



	//z = sec.a;	inaccessible : class one is made private by in_two
	//z = sec.b;	inaccessible : class one is made private by in_two
	//z = sec.c;	inaccessible : class one is made private by in_two

	in_one frs;
	//z = frs.a; private variable : not accessible
	//z = frs.b; protected variable : accessible only in in_one class;
	z = frs.c;


	return 0;
}

*/














/*
 Inheritance ex2
#define max 10
class stack
{
	public:
	int sta[max];
	int top;

	public:
	stack()
	{
	 top = -1;
	}

	void push(int num)
	{

		top++;
		sta[top] = num;

	}

	int pop(void)
	{
		int num;
		num =sta[top];
		top--;

		return num;
	}



};

class in_stack: public stack
{
	public:

	void push(int num)
	{

		if(top == max-1)

		cout << "Stack is full" << endl;

		else

		stack::push(num);

	}

	int pop(void)
	{
		int n;
		if(top == -1)
		{
			cout<< "Stack is empty" << endl;
			return NULL;
		}
		else
		{
			n = stack::pop();
			return n;
		}

	}


};

int main(void)
{
	in_stack st;

	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(1);
	st.push(2);
	st.push(3);
	st.push(4);
	st.push(5);
	st.push(1);
	st.push(2);

	cout << endl << "Poped item is "<< st.pop()<<endl;
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	st.pop();
	cout << endl << "Poped item is "<< st.pop()<<endl;
	st.pop();
	st.pop();
	return 0;
}

*/
/*
Inheritance ex1
class index
{
	protected:

	int count;

	public:

	index()
	{
		count =2;
	}


	void operator ++()
	{
		++count;

	}
	void display(void)
	{

		cout<< endl << "The val is " << count <<endl;
	}

};

class in_index : public index
{
	public:
	void operator --()
	{
		count --;
	}

};

int main(void)
{
	in_index i;

	i.display();

	++i;
	i.display();
	--i;
	i.display();
	return 0;
}

*/
/*
QUEUE

struct node
{
	int data;
	node *link;

};


class queue
{
	private:

	node *front, *rear;

	public:

	queue()
	{

		front = NULL;
		rear = NULL;

	}

	~queue()
	{

		cout<<endl<< "I am in the Destructor" << endl ;
		if(front == NULL)
		return;

		node *temp;
		while(front != NULL)
		{
			temp = front;
			front = front->link;
			delete temp;
		}
	}

	void addinq(int num);
	int delq(void);
};


void queue::addinq(int num)
{
	node *temp;

	temp = new node;

	if(temp == NULL)
	{
		cout << endl << "Queue is full" << endl;
		return;
	}

	temp -> data = num;
	temp -> link = NULL;

	if(front == NULL)
	{
		front = rear = temp;
	}

	rear->link = temp;
	rear = rear->link;

}

int queue::delq(void)
{

	int val;

	if(front == NULL)
	{
		cout << endl << "The queue is empty" << endl ;
		return NULL;
	}

	node *temp;

	val = front->data;
	temp = front;
	front = front->link;
	delete temp;
	return val;
}

int main(void)
{
	queue q;
	int val;
	q.addinq(10);
	q.addinq(20);
	q.addinq(30);
	q.addinq(40);
	q.addinq(50);

	val = q.delq();
    cout<<endl<< "The value deleted is "<< endl;
	val = q.delq();
    cout<<endl<< "The value deleted is "<< endl;
	val = q.delq();
    cout<<endl<< "The value deleted is "<< endl;
	val = q.delq();
    cout<<endl<< "The value deleted is "<< endl;

	return 0;
}
*/











/*
 *
 STACKS

class stack
{

	private:

	struct node
	{
		int data;
		node *link;

	}*top;


	public:

	stack();
	void push(int num);
	int pop(void);
	void display(void);
	~stack();
};

stack::stack()
{
	top = NULL;
}

void stack::push(int num)
{
	node *temp;
	temp = new node;

	if(temp == NULL)
	{
		cout<< endl << "The stack is full" << endl;
		return;
	}

	temp -> data = num;
	temp -> link = top;
	top = temp;

}

int stack::pop(void)
{
	node *temp;
	int val;

	if(top == NULL)
	{
		cout << endl << "Stack is empty" << endl;
		return NULL;
	}

	temp = top;
	val  = temp->data;
	top  = temp->link;

	delete temp;
	return val;

}
stack::~stack()
{

	cout << endl << "I am in destructor" << endl;
	if(top == NULL)
	return;

	node *temp;

	while(top != NULL)
	{
		temp = top;
		top = top ->link;
		delete temp;
	}


}

int main(void)
{
	int val;

	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);

	val = s.pop();
	cout<< endl <<"The value poped is "<< val << endl;
	val = s.pop();
	cout<< endl <<"The value poped is "<< val << endl;
	val = s.pop();
	cout<< endl <<"The value poped is "<< val << endl;
	val = s.pop();
	cout<< endl <<"The value poped is "<< val << endl;


	return 0;
}

*/










/*
Linked list using class and object
class linklist
{
	private:

	struct node
	{
		int data;
		node *link;

	}*p;


	public:


	linklist();
	void append(int num);
	void addatbeg(int num);
	void addafter(int c, int num);
	void del(int num);
	void display(void);
	//int count();
	~linklist();


};

linklist::linklist()
{
	p = NULL;
}

void linklist::append(int num)
{
	node *q, *t;

	if(p == NULL)
	{
		p = new node;
		p->data = num;
		p->link = NULL;
	}
	else
	{
		q = p;

		while(q->link != NULL)
		q = q->link;

		t = new node;
		t->data = num;
		t->link = NULL;
		q->link = t;

	}


}

void linklist::addatbeg(int num)
{
	node *q;

	q = new node;
	q->data = num;
	q->link = p;
	p = q;

}

void linklist::addafter(int c, int num)
{
	node *q,*t; int i;

	q = p;
	for(i=0; i<c; i++)
	{
		q = q->link;

		if(q == NULL)
		{

			cout<<endl<<"There are less than c items"<< endl;
			return;
		}

	}

	t = new node;
	t->data = num;
	t->link = q->link;
	q->link = t;


}

void linklist::display()
{

	node *q;

	cout << endl;

	for(q = p; q!=NULL; q=q->link)
	{
		cout << endl << q->data;
	}

}

linklist::~linklist()
{

	cout<< endl << "I am in destructor" << endl;

}

void linklist::del(int num)
{
	node *q, *r;
	q = p;

	if(q->data == num)
	{
		p = q->link;
		delete q;
		return;
	}

	//traverse the list
	r = q;

	while(q != NULL)
	{

		if(q->data == num)
		{
			r->link = q->link;
			delete q;
			return;
		}

		r = q;
		q = q->link;

	}


}


int main(void)
{
	linklist l,ll;

	l.append(10);
	l.append(20);
	l.append(30);
	l.append(40);
	l.append(50);

	l.display();

	l.addatbeg(1);
	l.display();

	l.addafter(3,45);
	l.display();

	l.del(45);
	l.display();


	ll.append(100);
	ll.append(200);
	ll.append(300);
	ll.append(400);
	ll.append(500);
	ll.display();

	ll.addatbeg(10);
	ll.display();

	ll.addafter(3,450);
	ll.display();

	ll.del(450);
	ll.display();


	return 0;
}

*/











/*
class test
{
	private: static int i;

	public:

	test()
	{
		++i;

	}

	static void show(void)
	{
		if(i == 1)
		cout << "There is " << i << " object" << endl;
		else
		cout << "There are " << i << " objects" << endl;
	}



};

int test::i = 0;

int main(void)
{
	test t1;
	test::show();

	test t2;
	test::show();

	test t3;
	test::show();
	return 0;
}
*/





/*
 static data member
class test
{
	private : static int i;

	public:

	test()
	{
		++i;
	}

	void show(void)
	{

		cout << "the val of i is " << i << endl;
	}

};

int test::i = 0;

int main(void)
{
	test t1;
	t1.show();
	test  t2;
	t2.show();

	test t3;
	t3.show();

	return 0;
}

*/
/*
 Memory allocation failed function  is pointed by set_new_handler
int main(void)
{
	void memwarn(void);
	set_new_handler(memwarn);

	char *p = new char[100];

	cout << endl << "First allocation: p = " << hex << long (p);
	p = new char[9123242343440000000000u];

	set_new_handler(0); // return o default
	return 0;


}

void memwarn(void)
{
	cout << endl << "Memory allocation failed";
	exit(1);
}

*/
/*
new and delete operators
"new" is better than malloc because
1. it creates object where as malloc does the memory allocation only.
2. it returns the pointer of appropriate type. no need of type casting.
3. "new" can be overloaded on class-by-class basis


class employee
{
	private:
				char name[20];
				int age;
				float sal;

	public:

				employee()
				{
					cout << "i am in zero arg const" << endl ;

					strcpy(name , "");
					age = 0;
					sal = 0.0;

				}

				employee (char *n, int a, float s)
				{

					cout << "i am in three arg const" << endl ;
					strcpy(name, n);
					age = a;
					sal = s;

				}

				void setdata(char *n, int a , float s)
				{

					strcpy(name, n);
					age = a;
					sal = s;

				}

				void showdata(void)
				{

					cout<< endl << name << "\t" << age << "\t" << sal << "\t" << endl;

				}

				~employee()
				{

					cout << endl << "I am in the destructor" << endl;

				}
};


int main(void)
{
	employee *p;  // object

	cout << endl << "Before new for p" << endl;
	p = new employee;
	cout << endl << "After new for p" << endl;
	p-> setdata("Kaustubh", 23, 5000.0);

	employee *q;

	q = new employee("Hrishikesh", 23, 7000.0);

	p->showdata();
	q->showdata();

	delete p;
	delete q;

	return 0;

}

*/




/*
function definition out of the class

class test
{

	private : int i;

	public :

	test(void);
	test(int j);
	void show(void);

};

test::test()
{
	cout << "Please enther the val " << endl;
	cin >> i ;
}

test::test(int j)
{
	i = j;
}

void test::show(void)
{

	cout << "The val is " << i << endl;

}

int main(void)
{
	test t1, t2(2+3);

	t1.show();
	t2.show();


	return 0;
}

*/


/*
 Overloading Unary operator

class test
{
	private : int i;

	public :

	test(int j){i = j;}

	void show(void)
	{

		cout << "The val is " << i << endl;

	}

	void operator ++()
	{

		++i;

	}

	void operator --()
	{

		--i;
	}

};

int main(void)
{

	test t(3);

	t.show();
	++t;
	t.show();
	++t;
	t.show();
	++t;
	t.show();

	--t;
	t.show();
	--t;
	t.show();

	return 0;
}
*/
/*
 constructors

class test
{
	private : int j;

	public :

	test()
	{


	}

	test (int i)
	{

		j = i;

	}

	test (int i, int k)
	{
		j = i + k;

	}
	void getval(void)
	{

		cout <<endl << "Please enter the value " << endl;
		cin >> j ;

	}
	void display(void)
	{

		cout << "The value is " << j << endl;

	}

};



int main(void)
{
	test t1(4), t2, t3(10,50);

	t1.display();
	t2.getval();
	t2.display();

	t3.display();

	return 0;
}

*/

/*
Classes
class rectangle
{

	private: int len,br;

	public :

	void getdata()
	{
		cout << "Please enter length and breadth"<<endl;

		cin >> len;

		cout << endl;

		cin >> br;

	}

	void setdata(int l, int b)
	{
		len = l;
		 br = b;
	}

	void display()
	{

		cout << endl << "lengh is " << len << endl;
		cout << "breadth is " << br << endl;
	}


	void area_peri()
	{
		int a , p;

		a = len * br;
		p = 2* (len + br);

		cout << "The Area of rectangle is " << a << endl;
		cout << "The Perimeter of rectangle is " << p << endl;


	}

};



int main(void)
{
	rectangle r1,r2,r3;

	r1.getdata();
	r1.display();
	r1.area_peri();

	r2.setdata(10,12);
	r2.display();
	r2.area_peri();

	r3.setdata(50,50);
	r3.display();
	r3.area_peri();

	return 0;
}

*/

/*
Operator Overloading
struct matrix
{
	int arr[3][3];

};

struct matrix operator + (struct matrix a, struct matrix b)
{
	struct matrix c;
	int i,j;

	for(i=0;i<3; i++)
	{
		for(j=0;j<3;j++)
		{

			c.arr[i][j] = a.arr[i][j] + b.arr[i][j];
		}

	}

	return c;
}


int main(void)
{

	struct matrix a, b, c;
	int i,j;

	a.arr[0][0] = 1;
	a.arr[0][1] = 1;
	a.arr[0][2] = 1;
	a.arr[1][0] = 1;
	a.arr[1][1] = 1;
	a.arr[1][2] = 1;
	a.arr[2][0] = 1;
	a.arr[2][1] = 1;
	a.arr[2][2] = 1;

	b.arr[0][0] = 1;
	b.arr[0][1] = 1;
	b.arr[0][2] = 1;
	b.arr[1][0] = 1;
	b.arr[1][1] = 1;
	b.arr[1][2] = 1;
	b.arr[2][0] = 1;
	b.arr[2][1] = 1;
	b.arr[2][2] = 1;


	c = a + b;

	for(i=0; i<3 ; i++)
	{
		for(j=0;j<3;j++)
		{

			cout << c.arr[i][j] << "  ";

		}
		cout << endl;
	}

	return 0;
}

*/

/*
 Default Argument

void fun(int a = 10, int b = 20, int c = 30, int d = 40, int e = 50);

int main(void)
{
	fun(12);
	fun(34, 69);
	fun(90, 45 , 67 , 78);
	fun();

	return 0;
}

void fun(int a, int b, int c, int d, int e)
{

	cout << "a is " << a << "b is " << b << "c is " << c << "d is " << d << "e is " << e << endl;

}
*/
/*
 Function overloading
int fun(char a)
{
	cout << "char a is " << a <<endl;
	return 0;
}

int fun(int a)
{

	cout << "int a is " << a << endl;
	return 0;
}

int fun(float a)
{
	cout << "Float a is " << a << endl;
	return 0;
}

int main(void)
{
	char  a = 'K';
	int   b = 12;
	float c = 12.1;
	fun (a);
	fun (b);
	fun (c);
	return 0;
}
*/
/*
struct emp
{

	char name[20];
	int age;
	float sal;

};

emp e1 = {"Kaustubh", 22, 5000};
emp e2 = {"XXX", 22, 25000};


emp fun()
{

	cout << "I am in fun()"<< endl;
	cout << e1.name << " " << e1.age << " " << e1.sal << endl;

	return e1;

}

int main(void)
{
	emp &fun();

	fun() = e2;
	cout << e1.name << " " << e1.age << " " << e1.sal << endl;
	return 0;
}
*/
