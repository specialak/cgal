// ============================================================================
//
// Copyright (c) 1997-2002 The CGAL Consortium
//
// This software and related documentation is part of an INTERNAL release
// of the Computational Geometry Algorithms Library (CGAL). It is not
// intended for general use.
//
// ----------------------------------------------------------------------------
//
// file          : include/CGAL/config/msvc7/CGAL/cl_1300.h
// package       : wininst
// author(s)     : Radu Ursu
// release       : 
// release_date  : 
//
// coordinator   : Radu Ursu <rursu@sophia.inria.fr>
//
// ============================================================================



//+--------------------------------------------------------------------------
// The compiler has to provide a Standard Template Library
//+--------------------------------------------------------------------------
// STL test ok

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_CCTYPE_MACRO_BUG is set, if a compiler defines the
//| standard C library functions in cctype (isdigit etc.) as macros.
//| According to the standard they have to be functions.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_CCTYPE_MACRO_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if the compiler does not promote enumeration types
//| (which depend on a template parameter) correctly when they are used 
//| as int template arguments. (e.g. Borland 5.5)
//+--------------------------------------------------------------------------
//#define CGAL_CFG_ENUM_BUG 1

//+--------------------------------------------------------------------------
//| This flag is set, if the compiler does not match the most
//| specialized instance of a function template correctly,
//| but complains about multiple matches.
//| (e.g. SGI 7.2)
//+--------------------------------------------------------------------------
#define CGAL_CFG_MATCHING_BUG_2 1

//+--------------------------------------------------------------------------
//| This flag is set, if the compiler does not match function arguments 
//| of pointer type correctly, when the return type depends on 
//| the parameter's type. (e.g. sun C++ 5.3)
//+--------------------------------------------------------------------------
#define CGAL_CFG_MATCHING_BUG_3 1

//+--------------------------------------------------------------------------
//| This is a test-case for a bug in VC++ 7.0 that 
//| redefines min(a, b) and max(a, b)
//| Files concerned: windows.h, windef.h
//| When the bug is present, CGAL_CFG_NOMINMAX_BUG is set
//| The file basic.h should check if this bug is present and if so, 
//| define NOMINMAX flag
//+--------------------------------------------------------------------------
#define CGAL_CFG_NOMINMAX_BUG 1

//+--------------------------------------------------------------------------
//| When template implementation files are not included in the source files,
//| a compiler may attempt to find the unincluded template bodies
//| automatically. For example, suppose that the following conditions are
//| all true.
//|
//| - template entity ABC::f is declared in file xyz.h
//| - an instantiation of ABC::f is required in a compilation
//| - no definition of ABC::f appears in the source code processed by the
//|   compilation
//| 
//| In this case, the compiler may look to see if the source file xyz.n exists,
//| where n is .c, .C, .cpp, .CPP, .cxx, .CXX, or .cc. If this feature is
//| missing, the flag CGAL_CFG_NO_AUTOMATIC_TEMPLATE_INCLUSION is set.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_AUTOMATIC_TEMPLATE_INCLUSION 1

//+--------------------------------------------------------------------------
//| The byte order of a machine architecture distinguishes into
//| big-endian and little-endian machines.
//| The following definition is set if it is a little-endian machine.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_BIG_ENDIAN 1

//+--------------------------------------------------------------------------
//| The class std::iterator_traits is part of the std library.
//| It is used to access certain properties of iterators, such as
//| their value type or iterator category (forward, bidirectional, etc.).
//| The macro CGAL_CFG_NO_ITERATOR_TRAITS is set if std::iterator_traits
//| is not fully supported.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_ITERATOR_TRAITS 1

//+--------------------------------------------------------------------------
//| This flag is set if the compiler doesn't support the operator Koenig
//| lookup. That is, it does not search in the namespace of the arguments for
//| the function.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_KOENIG_LOOKUP 1

//+--------------------------------------------------------------------------
//| If a compiler doesn't know the locale classic
//| CGAL_CFG_NO_LOCALE is set. 
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LOCALE 1

//+--------------------------------------------------------------------------
//| If a compiler (or assembler or linker) has problems with long names
//| CGAL_CFG_NO_LONGNAME_PROBLEM is set.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_LONGNAME_PROBLEM 1

//+--------------------------------------------------------------------------
//| This flag is set, if a compiler does not accept the template
//| keyword when referring to nested template classes.
//| E.g. if the templated class C is defined within class A,
//| one refers to it by A::template C< >.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_NESTED_TEMPLATE_KEYWORD 1

//+--------------------------------------------------------------------------
//| If a compiler doesn't support partial specialisation of class templates,
//| the flag CGAL_CFG_NO_PARTIAL_CLASS_TEMPLATE_SPECIALISATION is set.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_PARTIAL_CLASS_TEMPLATE_SPECIALISATION 1

//+--------------------------------------------------------------------------
//| The parameter types of member functions might contain a scope
//| operator. This works as long as the member function is implemented
//| inline in the class. If the member function is implemented external
//| not all compilers are able to parse the scope operators correctly.
//| The following definition is set if the compiler fails parsing.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_SCOPE_MEMBER_FUNCTION_PARAMETERS 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_NO_STANDARD_HEADERS is set, if a compiler does not 
//| support the new standard headers (i.e. without the .h suffix).
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_STANDARD_HEADERS 1

//+--------------------------------------------------------------------------
//| The flag CGAL_CFG_NO_STDC_NAMESPACE is set, if a compiler does not
//| put the parts of the standard library inherited from the standard
//| C library in namespace std. (only tests for the symbols used in CGAL)
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_STDC_NAMESPACE 1

//+--------------------------------------------------------------------------
//| Checks whether the compiler wants to have a <> in friend declarations
//| of template functions.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_NO_TEMPLATE_FRIEND_DISTINCTION 1

//+--------------------------------------------------------------------------
//| G++ 2.95.2 has problems with member functions implemented outside of
//| the class body if this member function has a parameter type that is
//| dependant on a template in the template parameter list of the class. A
//| workaround would be to implement the member function inline in the class.
//| The following definition is set if this error error occurs.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_TMPL_IN_TMPL_DEPENDING_FUNCTION_PARAM 1

//+--------------------------------------------------------------------------
//| Nested templates in template parameter, such as 'template <
//| template <class T> class A>' are not supported by any compiler. 
//| The following definition is set if they are not supported.
//+--------------------------------------------------------------------------
#define CGAL_CFG_NO_TMPL_IN_TMPL_PARAM 1

//+--------------------------------------------------------------------------
//| If a compiler does not accept the overloading of a template function, when
//| the template returns a reference, while the overloading doesn't.
//| In that case, CGAL_CFG_RETURN_TYPE_BUG is set.
//| This bug shows up on VC++ 6, and VC++ 7 beta 2.
//+--------------------------------------------------------------------------
#define CGAL_CFG_RETURN_TYPE_BUG 1

//+--------------------------------------------------------------------------
//| This is a test-case for a bug in SunPro 5.3 that occurs in the HDS.
//| When the bug is present, CGAL_CFG_SUNPRO_PARTIAL_SPEC_BUG is set.
//+--------------------------------------------------------------------------
#define CGAL_CFG_SUNPRO_PARTIAL_SPEC_BUG 1

//+--------------------------------------------------------------------------
//| If a compiler complains about typename, when passing a dependent
//| type as template parameter, the flag CGAL_CFG_TYPENAME_BUG is set.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_TYPENAME_BUG 1

//+--------------------------------------------------------------------------
//| If a compiler does not accept a using declaration referring to a 
//| symbol that is again declared by a using declaration, the flag
//| CGAL_CFG_USING_USING_BUG is set.
//+--------------------------------------------------------------------------
//#define CGAL_CFG_USING_USING_BUG 1

//+--------------------------------------------------------------------------
//| This is a test-case for a bug in VC++ 7.0 beta2 that occurs in the kernel.
//| When the bug is present, CGAL_CFG_VC7_PRIVATE_TYPE_BUG is set.
//+--------------------------------------------------------------------------
#define CGAL_CFG_VC7_PRIVATE_TYPE_BUG 1

