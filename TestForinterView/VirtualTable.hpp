#include "iostream"
#include "string"
#include <typeinfo>
using namespace std;


class Zero
{
public:
    virtual void f111() { }
};

class Base : public Zero
{
public:
    virtual void f() { }
};

class Deri1234567890ve : public Base
{
};

typedef unsigned long DWORD;

struct PMD
{
    int mdisp;  //member displacement
    int pdisp;  //vbtable displacement
    int vdisp;  //displacement inside vbtable
};

struct RTTIBaseClassDescriptor
{
    struct TypeDescriptor* pTypeDescriptor; //type descriptor of the class
    DWORD numContainedBases; //number of nested classes following in the Base Class Array
    struct PMD where;        //pointer-to-member displacement info
    DWORD attributes;        //flags, usually 0
};


struct TypeDescriptor
{
    DWORD ptrToVTable;
    DWORD spare;
    char name[ ];
};

struct RTTIClassHierarchyDescriptor
{
    DWORD signature;      //always zero?
    DWORD attributes;     //bit 0 set = multiple inheritance, bit 1 set = virtual inheritance
    DWORD numBaseClasses; //number of classes in pBaseClassArray
    struct RTTIBaseClassArray* pBaseClassArray;
};

struct RTTICompleteObjectLocator

{
    
    DWORD signature; //always zero ?
    
    DWORD offset;    //offset of this vtable in the complete class
    
    DWORD cdOffset;  //constructor displacement offset
    
    struct TypeDescriptor* pTypeDescriptor; //TypeDescriptor of the complete class
    
    //int * ptr;
    struct RTTIClassHierarchyDescriptor* pClassDescriptor; //describes inheritance hierarchy
    
};




int VirtualTable()
{
    /*Base *pderive = new Deri1234567890ve();
     int **ptr = (int **)(&pderive);
     int *ptable = (int *)(*(int *)(*ptr));
     int * rtti = ptable -1;
     
     RTTICompleteObjectLocator * RIIT_locator =   (RTTICompleteObjectLocator *)( *(int*)rtti);
     cout<<RIIT_locator->pTypeDescriptor->name<<endl;*/
    
    
    Base *pderive = new Deri1234567890ve();
    long *ptable = (long*)*(long*)pderive;
    long * rtti = ptable -1;
    
    // 显示当前类的名字“。。Deri1234567890ve。。”
    RTTICompleteObjectLocator * RIIT_locator =   (RTTICompleteObjectLocator *)( *(long*)rtti);
    cout<<RIIT_locator->pTypeDescriptor->name<<endl;
    
    // 显示自己和所有父类的名字
    long * p1 = (long*)(RIIT_locator->pClassDescriptor->pBaseClassArray);
    long * p2 = (long*)*(p1+2);
    TypeDescriptor* pDesc = (TypeDescriptor*)(*p2);
    cout<<"One of Base Classes: "<<pDesc->name<<endl;
    
    p1 = (long*)(RIIT_locator->pClassDescriptor->pBaseClassArray);
    p2 = (long*)*(p1 + 1);
    pDesc = (TypeDescriptor*)(*p2);
    cout<<"One of Base Classes: "<<pDesc->name<<endl;
    
    p1 = (long*)(RIIT_locator->pClassDescriptor->pBaseClassArray);
    p2 = (long*)*(p1);
    pDesc = (TypeDescriptor*)(*p2);
    cout<<"One of Base Classes: "<<pDesc->name<<endl;
    return 0;
}
