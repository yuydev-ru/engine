#ifndef ENGINE_INPUTDATA_H
#define ENGINE_INPUTDATA_H

#include<string>
#include<unordered_map>
#include<SFML/Window.hpp>

struct inputData
{
    std::unordered_map<std::string, sf::Keyboard::Key> data;

#define INSERT_KEYDATA(input_key) this->data.insert(std::make_pair(#input_key, sf::Keyboard::input_key));
    inputData()
    {
        // Keyboard
        INSERT_KEYDATA(Unknown);
        INSERT_KEYDATA(A);
        INSERT_KEYDATA(B);
        INSERT_KEYDATA(C);
        INSERT_KEYDATA(D);
        INSERT_KEYDATA(E);
        INSERT_KEYDATA(F);
        INSERT_KEYDATA(G);
        INSERT_KEYDATA(H);
        INSERT_KEYDATA(I);
        INSERT_KEYDATA(J);
        INSERT_KEYDATA(K);
        INSERT_KEYDATA(L);
        INSERT_KEYDATA(M);
        INSERT_KEYDATA(N);
        INSERT_KEYDATA(O);
        INSERT_KEYDATA(P);
        INSERT_KEYDATA(Q);
        INSERT_KEYDATA(R);
        INSERT_KEYDATA(S);
        INSERT_KEYDATA(T);
        INSERT_KEYDATA(U);
        INSERT_KEYDATA(V);
        INSERT_KEYDATA(W);
        INSERT_KEYDATA(X);
        INSERT_KEYDATA(Y);
        INSERT_KEYDATA(Z);
        INSERT_KEYDATA(Num0);
        INSERT_KEYDATA(Num1);
        INSERT_KEYDATA(Num2);
        INSERT_KEYDATA(Num3);
        INSERT_KEYDATA(Num4);
        INSERT_KEYDATA(Num5);
        INSERT_KEYDATA(Num6);
        INSERT_KEYDATA(Num7);
        INSERT_KEYDATA(Num8);
        INSERT_KEYDATA(Num9);
        INSERT_KEYDATA(Escape);
        INSERT_KEYDATA(LControl);
        INSERT_KEYDATA(LShift);
        INSERT_KEYDATA(LAlt);
        INSERT_KEYDATA(LSystem);
        INSERT_KEYDATA(RControl);
        INSERT_KEYDATA(RShift);
        INSERT_KEYDATA(RAlt);
        INSERT_KEYDATA(RSystem);
        INSERT_KEYDATA(Menu);
        INSERT_KEYDATA(LBracket);
        INSERT_KEYDATA(RBracket);
        INSERT_KEYDATA(SemiColon);
        INSERT_KEYDATA(Comma);
        INSERT_KEYDATA(Period);
        INSERT_KEYDATA(Quote);
        INSERT_KEYDATA(Slash);
        INSERT_KEYDATA(BackSlash);
        INSERT_KEYDATA(Tilde);
        INSERT_KEYDATA(Equal);
        INSERT_KEYDATA(Dash);
        INSERT_KEYDATA(Space);
        INSERT_KEYDATA(Return);
        INSERT_KEYDATA(BackSpace);
        INSERT_KEYDATA(Tab);
        INSERT_KEYDATA(PageUp);
        INSERT_KEYDATA(PageDown);
        INSERT_KEYDATA(End);
        INSERT_KEYDATA(Home);
        INSERT_KEYDATA(Insert);
        INSERT_KEYDATA(Delete);
        INSERT_KEYDATA(Add);
        INSERT_KEYDATA(Subtract);
        INSERT_KEYDATA(Multiply);
        INSERT_KEYDATA(Divide);
        INSERT_KEYDATA(Left);
        INSERT_KEYDATA(Right);
        INSERT_KEYDATA(Up);
        INSERT_KEYDATA(Down);
        INSERT_KEYDATA(Numpad0);
        INSERT_KEYDATA(Numpad1);
        INSERT_KEYDATA(Numpad2);
        INSERT_KEYDATA(Numpad3);
        INSERT_KEYDATA(Numpad4);
        INSERT_KEYDATA(Numpad5);
        INSERT_KEYDATA(Numpad6);
        INSERT_KEYDATA(Numpad7);
        INSERT_KEYDATA(Numpad8);
        INSERT_KEYDATA(Numpad9);
        INSERT_KEYDATA(F1);
        INSERT_KEYDATA(F2);
        INSERT_KEYDATA(F3);
        INSERT_KEYDATA(F4);
        INSERT_KEYDATA(F5);
        INSERT_KEYDATA(F6);
        INSERT_KEYDATA(F7);
        INSERT_KEYDATA(F8);
        INSERT_KEYDATA(F9);
        INSERT_KEYDATA(F10);
        INSERT_KEYDATA(F11);
        INSERT_KEYDATA(F12);
        INSERT_KEYDATA(F13);
        INSERT_KEYDATA(F14);
        INSERT_KEYDATA(F15);
        INSERT_KEYDATA(Pause)
    }
#undef INSERT_KEYDATA

    sf::Keyboard::Key
    stringToKeyboardKey(const std::string &key)
    {
            return this->data[key];
    }
};

#endif