**Order of construction of derived classes**

![](http://www.learncpp.com/images/CppTutorial/Section11/DerivedBase.gif)</br>
Because Derived inherits functions and variables from Base, you may assume that the members of Base are copied into Derived.
However, this is not true. Instead, we can consider Derived as a two part class: one part Derived, and one part Base.</br>

![](http://www.learncpp.com/images/CppTutorial/Section11/DerivedBaseCombined.gif)</br>

int main()
{</br>
    Derived derived;</br>
    return 0;</br>
}</br>

If you were to try this yourself, you wouldn’t notice any difference from the previous example where we instantiate non-derived class Base. But behind the scenes, things happen slightly different. As mentioned above,
Derived is really two parts: a Base part, and a Derived part. When C++ constructs derived objects, it does so in phases. First, the most-base class (at the top of the inheritance tree) is constructed first. Then each child class is constructed in order, until the most-child class (at the bottom of the inheritance tree) is constructed last.

So when we instantiate an instance of Derived, 
first the Base portion of Derived is constructed (using the Base default constructor).
Once the Base portion is finished, the Derived portion is constructed (using the Derived default constructor).
At this point, there are no more derived classes, so we are done.
