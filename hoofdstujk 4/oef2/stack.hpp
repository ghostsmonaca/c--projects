namespace S{
    class stack
    {
    private:
        static const int m_grootte{5};
        int elems[m_grootte];
        int m_top;
    public:
        stack(int);

        int gettop() const {return m_top;} //getter
        void settop(int top) {top = m_top;} //setter

        int getGrootte() const {return m_grootte;} //getter
        void setGrootte(int grootte) {grootte = m_grootte;} //setter

        void init();
        void print();
        void push(int a);
        void pop();
        bool is_empty();
        bool is_full();

    };
    
}