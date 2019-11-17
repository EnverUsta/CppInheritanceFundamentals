![](http://www.learncpp.com/images/CppTutorial/Section11/PersonTeacher.gif)

**Problems with multiple inheritance**<br/>
Multiple inheritance introduces a lot of issues that can markedly increase 
the complexity of programs and make them a maintenance nightmare.

1-)First, ambiguity can result when multiple base classes contain a function with the same name.
you can see how things can get complex when your class inherits from four or six base classes, which inherit from other classes themselves.
The potential for naming conflicts increases exponentially as you inherit more classes,
and each of these naming conflicts needs to be resolved explicitly.

2-)Second, and more serious is the diamond problem, which your author likes to call the “diamond of doom”.
This occurs when a class multiply inherits from two classes which each inherit from a single base class.
This leads to a diamond shaped inheritance pattern.
For example,

```
class PoweredDevice
{
};
 
class Scanner: public PoweredDevice
{
};
 
class Printer: public PoweredDevice
{
};
 
class Copier: public Scanner, public Printer
{
};
```
As an interesting aside, you have already been using classes written using multiple inheritance without knowing it:
the iostream library objects
std::cin and std::cout are both implemented using multiple inheritance!</br></br>
Rule: Avoid multiple inheritance unless alternatives lead to more complexity.
