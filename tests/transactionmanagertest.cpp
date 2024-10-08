#include "transactionmanager.h"

#include <gtest/gtest.h>

TEST(TransactionManagerTest, AddTransaction) {
    TransactionManager manager;
    manager.addTransaction(100.0, "Income");
    EXPECT_EQ(manager.getTotalIncome(), 100.0);
}
