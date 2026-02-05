int main()
{
    auto lambda2222222222222222222 = [&]()
    {
        code();
    };

    EXPECT_CALL(*foo, bar)
        .WillOnce(InvokeWithoutArgs([&]() {
            return 0;
         }));

    auto lambda3333 = [&]() {
        code();
    };
}
