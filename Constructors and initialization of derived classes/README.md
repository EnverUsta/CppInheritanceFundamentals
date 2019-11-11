**Constructors and initialization of derived classes**



*When we instantiate a base object, it's steps are pretty straightforward.*

1-Memory for base is set aside<br/>
2-The appropriate base constructor is called<br/>
3-The initialization list initializes member variables<br/>
4-The body of constructor executes<br/>
5-Control is returned to the caller<br/>

```
int main(){
  Base base(5);
}
```


*When we instantiate a derived class objecct it's a little bit different :)*

1-Memory for derived is set aside(enough for both the Base and Derived)<br/>
2-The appropriate derived constructor is called<br/>
3-The base object is constructed first using the appropriate Base constructor.If no base constructore is specified, the default constructor will be used.<br/>
4-The initialization list initializes member variables.<br/>
5-The body of the constructor executes.<br/>
6-Control is returned to the caller.<br/>

```
int main(){
  Derived derived(1.3);
}
```


*Initializaing base member variables*
-We don't have any chance to initialize base class's member variables in derived class constructor because: <br/>
->C++ want to avoid some confusing things. For instance, if we have const or reference variables in Base class.We now that
these variables should be initilized at creation time.However, if we initalize them in Derived class constructor it would cause
some errors.<br/>
->Also each derived class would have an opportunity to initialize that variable, potentially changing its values.<br/>
Because of these problems C++ restricts us to initialize base class's member variables(it's pretty sensible).<br/><br/>

Some novice programmers tend to assign base class's member variables in derived class's constructor.However, this is not an efficient 
way to do this :)
Example:

```
Derived(double cost = 0.0, int id = 0):m_cost(cost){
  m_id = id;
} //It wouldn't work if m_id were a const or reference. IMPORTANT!!!
```
<br/><br/><br/>

Fortunately, C++ allows us to call Base class constructor that we want :)
We may call base class constructor in derived class constructor's initialization list :)
That's pretty sensible

```
//Constructor of derived class
Derived(double cost = 0.0, int id = 0)
  :Base(id),  //Call Base(int) constructor with value id! 
    m_cost(cost)
{
}
```


