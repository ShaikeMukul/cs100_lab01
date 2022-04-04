#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3];
          test_val[0] = "./c-echo";
          test_val[1] = "hello"; 
          test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

//3 custom test cases:

TEST(EchoTest,Newlines){
    char* test_val[4];
          test_val[0] = "./c-echo";
          test_val[1] = "\n";
          test_val[2] = "\n";
          test_val[3] = "\n"; 
    EXPECT_EQ("\n \n \n", echo(4,test_val));
}

TEST(EchoTest,String){
    char* test_val[3];
          test_val[0] = "./c-echo";
          test_val[1] = "test1";
          test_val[2] = "test2";
    EXPECT_EQ("test1 test2", echo(3,test_val));
}

TEST(EchoTest,Dot){
    char* test_val[6];
          test_val[0] = "./c-echo";
          test_val[1] = ".";
          test_val[2] = ".";
          test_val[3] = ".";
          test_val[4] = ".";
          test_val[5] = ".";
    EXPECT_EQ(". . . . .", echo(6,test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
