/***************************************************************************** 
 * Project: RooFit                                                           * 
 *                                                                           * 
 * This code was autogenerated by RooClassFactory                            * 
 *****************************************************************************/ 

// Your description goes here... 

#include "Riostream.h" 

#include "SciKitLearnWrapper.h" 
#include "RooAbsReal.h" 
#include "RooAbsCategory.h" 
#include <math.h> 
#include "TMath.h" 

#include "Python.h"


ClassImp(SciKitLearnWrapper) 

 SciKitLearnWrapper::SciKitLearnWrapper(const char *name, const char *title, 
                        RooAbsReal& _features) :
   RooAbsReal(name,title), 
   features("features","features",this,_features)
 { 
 } 


 SciKitLearnWrapper::SciKitLearnWrapper(const SciKitLearnWrapper& other, const char* name) :  
   RooAbsReal(other,name), 
   features("features",this,other.features)
 { 
 } 



 Double_t SciKitLearnWrapper::evaluate() const 
 { 
   // ENTER EXPRESSION IN TERMS OF VARIABLE ARGUMENTS HERE 
   std::cout << "Hi from C++!" << std::endl;
   char* blah=NULL;
   PyObject* result = PyObject_CallFunction( m_callback, blah );
   Py_XDECREF( result );
   return 1.0 ; 
 } 

void SciKitLearnWrapper::RegisterCallBack( PyObject* pyobject )
{
	// see http://root.cern.ch/phpBB3/viewtopic.php?t=2606
	Py_INCREF( pyobject );
	m_callback = pyobject;
}

