#include "unity.h"
#include "BubbleSort.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_swap(void)
{
	int array[] = {20 , 2};
	swap(array, 0 , 1);	
	TEST_ASSERT_EQUAL(2 , array[0]);
	TEST_ASSERT_EQUAL(20 , array[1]);
}

void test_single_bubble_sort_5_40_and_return_5_40(void)
{
	int array[] = {5 , 40};
	SingleBubbleSort(array , 2 , 2);
	TEST_ASSERT_EQUAL(5 , array[0]);
	TEST_ASSERT_EQUAL(40, array[1]);
}

void test_single_bubble_sort_40_5_and_return_5_40(void)
{
	int array[] = {40 , 5};
	SingleBubbleSort(array , 2 , 2);
	TEST_ASSERT_EQUAL(5 , array[0]);
	TEST_ASSERT_EQUAL(40, array[1]);
}

void test_single_bubble_sort_30_20_10_and_return_10_30_20(void)
{
	int array[] = {30 , 20 , 10};
	SingleBubbleSort(array , 3 , 3);
	TEST_ASSERT_EQUAL(10 , array[0]);
	TEST_ASSERT_EQUAL(30 , array[1]);
	TEST_ASSERT_EQUAL(20 , array[2]);
}

void test_single_bubble_sort_5_20_1_6_and_return_1_5_20_6(void)
{
	int array[] = {5 , 20 , 1 , 6};
	SingleBubbleSort(array , 3 , 3);
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(5 , array[1]);
	TEST_ASSERT_EQUAL(20, array[2]);
	TEST_ASSERT_EQUAL(6 , array[3]);
}

void test_single_bubble_sort_15_5_3_and_return_3_15_5(void)
{
	int array[] = {15 , 5 , 3};
	SingleBubbleSort(array , 3 , 3);
	TEST_ASSERT_EQUAL(3 , array[0]);
	TEST_ASSERT_EQUAL(15, array[1]);
	TEST_ASSERT_EQUAL(5, array[2]);
}


void test_single_bubble_sort_5_20_1_3_and_return_1_5_20_3(void)
{
	int array[] = {5 , 20 , 1 , 3};
	SingleBubbleSort(array , 4 , 4);
	TEST_ASSERT_EQUAL(1 , array[0]);
	TEST_ASSERT_EQUAL(5 , array[1]);
	TEST_ASSERT_EQUAL(20, array[2]);
	TEST_ASSERT_EQUAL(3 , array[3]);
}

void test_single_bubble_sort_100_20_10_5_and_return_100_5_20_10(void)
{
	int array[] = {100 , 20 , 10 , 5};
	SingleBubbleSort(array , 3 , 4);
	TEST_ASSERT_EQUAL(100 , array[0]);
	TEST_ASSERT_EQUAL(5 , array[1]);
	TEST_ASSERT_EQUAL(20, array[2]);
	TEST_ASSERT_EQUAL(10 , array[3]);
}

void test_bubble_sort_40_5_6_1_4_and_return_1_4_5_6_40(void)
{
	int array[] = {40 , 5 , 6 , 1 , 4};
	BubbleSort(array , 5);
	TEST_ASSERT_EQUAL( 1 , array[0]);
	TEST_ASSERT_EQUAL( 4 , array[1]);
	TEST_ASSERT_EQUAL( 5 , array[2]);
	TEST_ASSERT_EQUAL( 6 , array[3]);
	TEST_ASSERT_EQUAL( 40, array[4]);
}

void test_bubble_sort_function(void)
{
	int array[] = {45 , 3 , 13 , 5 , 7 , 42};
	BubbleSort(array , 6);
	TEST_ASSERT_EQUAL( 3 , array[0]);
	TEST_ASSERT_EQUAL( 5 , array[1]);
	TEST_ASSERT_EQUAL( 7 , array[2]);
	TEST_ASSERT_EQUAL( 13, array[3]);
	TEST_ASSERT_EQUAL( 42, array[4]);
	TEST_ASSERT_EQUAL( 45, array[5]);
}