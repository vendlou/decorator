#ifndef __DECORATOR_TEST_HPP__
#define __DECORATOR_TEST_HPP__

#include "gtest/gtest.h"

#include "op.hpp"
#include "mult.hpp"
#include "add.hpp"
#include "sub.hpp"
#include "Ceil.hpp"
#include "Floor.hpp"
#include "Abs.hpp"
#include "Truncate.hpp"
#include "Parenthesies.hpp"


TEST(DecoratorTest, EvaluateTest) {	
    Op* seven3 = new Op(7.3);
    Op* four5 = new Op(4.5);
    Mult* TreeA = new Mult(seven3, four5);   
    Ceil* c = new Ceil(TreeA);  //33

    Op* three2 = new Op(3.2); 
    Op* two = new Op(2);
    Add* TreeB = new Add(three2, two);
    Floor* f = new Floor(TreeB); //5  

    Sub* TreeC = new Sub(f, c);  //-28
    Abs* a = new Abs(TreeC);  //28 
    EXPECT_EQ(a->evaluate(),28);   
}

TEST(DecoratorTest, StringifyTest) {	
    Op* seven = new Op(7);
    Op* four = new Op(4);
    Sub* TreeA = new Sub(seven, four);   
    Trunc* t = new Trunc(TreeA);  
    Op* five = new Op(5);
    Add* TreeB = new Add(five, t); //5+3
    
    EXPECT_EQ(TreeB->stringify(),"5.000000+3.000000"); 

    Paren* p = new Paren(TreeA);
    
    Add* TreeC = new Add(five,p);
    EXPECT_EQ(TreeC->stringify(),"5.000000+(7.000000-4.000000)");   
}
TEST(DecoratorTest, CompositeTest) {	
    Op* seven3 = new Op(7.3);
    Op* four5 = new Op(4.5);
    Mult* TreeA = new Mult(seven3, four5);   
    Ceil* c = new Ceil(TreeA);  //33

    Op* three2 = new Op(3.2); 
    Op* two = new Op(2);
    Add* TreeB = new Add(three2, two);
    Floor* f = new Floor(TreeB); //5  
    Trunc* t = new Trunc(f);
    EXPECT_EQ(t->evaluate(),5);
    EXPECT_EQ(t->stringify(),"5.000000");

    Sub* TreeC = new Sub(f, c);  //-28
    Abs* a = new Abs(TreeC);  //28 
    EXPECT_EQ(a->evaluate(),28);   
    EXPECT_EQ(a->stringify(),"3.200000+2.000000-7.300000*4.500000");
}

#endif
