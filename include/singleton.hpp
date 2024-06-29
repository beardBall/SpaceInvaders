class MySingleton
{
    private:
        // Private Constructor
        MySingleton();
        // Stop the compiler generating methods of copy the object
        MySingleton(MySingleton const& copy);            // Not Implemented
        MySingleton& operator=(MySingleton const& copy); // Not Implemented

    public:
        static MySingleton& getInstance()
        {
            // The only instance
            // Guaranteed to be lazy initialized
            // Guaranteed that it will be destroyed correctly
            static MySingleton instance;
            return instance;
        }
};