#include <catch2/catch_test_macros.hpp>
#include <catch2/benchmark/catch_benchmark_all.hpp>

#include "list_filter.h"

using namespace std;

TEST_CASE("Linked list elements can be added to the front")
{
    SLinkedList<int> list;
    REQUIRE(list.empty());
    list.addFront(1);
    REQUIRE_FALSE(list.empty());
    REQUIRE(list.front() == 1);
    list.addFront(2);
    REQUIRE(list.front() == 2);
    list.addFront(3);
    REQUIRE(list.front() == 3);
}

TEST_CASE("Linked list can be filtered by a predicate")
{
    SLinkedList<int> listA;
    listA.addFront(5);
    listA.addFront(4);
    listA.addFront(3);
    listA.addFront(2);
    listA.addFront(1);

    SLinkedList<int> listB;
    listB.addWithPredicate(listA, [](const int& e) { return e % 2 == 1; });
    REQUIRE(listB.front() == 5);
    listB.removeFront();
    REQUIRE(listB.front() == 3);
    listB.removeFront();
    REQUIRE(listB.front() == 1);
    listB.removeFront();
    REQUIRE(listB.empty());
}
