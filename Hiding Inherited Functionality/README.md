

make it as private
```
private:
    using  Base::m_value;
```
The following don't work getValue has been deleted
```
int getValue() = delete;
```

// We can still access the function deleted in the Derived class through the Base class
```	
std::cout << static_cast<Base>(derived).getValue(); 
```
