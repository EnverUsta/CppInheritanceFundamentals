**Inheritance and Access Specifiers**

```
// Inherit from Base publicly
class Pub: public Base
{
};
 
// Inherit from Base privately
class Pri: private Base
{
};
 
// Inherit from Base protectedly
class Pro: protected Base
{
};
 
class Def: Base // Defaults to private inheritance
{
};
```

Rule: use public inheritance unless you have a specific reason to do otherwise.</br>

**Public inheritance**:</br>
inherited public members => stay public</br>
inherited protected members => stay protected</br>
inherited private members => these are inaccessible because they were private in base class, stay inaccessible.</br>
</br></br>

**Private inheritance**:</br>
All members from the base class are inherited as private.</br>
public members become private</br>
protected members become private</br>
private members stay private</br>
</br></br>

**Protected inheritance**</br>
It's almost never used, except in very particular cases.</br>
The public and protected members become protected</br>
The private members stay inaccessible
