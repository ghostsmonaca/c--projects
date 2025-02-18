namespace N{
    class Coords{
        public:
            Coords(int, int);
            void print_coords();
            double calc_dist(const Coords &other) const;
            int getx() const {return m_x;} //getter
            void setx(int x) {m_x = x;} //setter

            int gety() const {return m_y;} //getter
            void sety(int y) {m_y = y;} //setter

            ~Coords(){}
        private:
            int m_x, m_y;
    };
}