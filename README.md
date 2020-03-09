# SDL-Smart-Pointer
 This library contains smart pointers with custom deleter. You no longer need to worry about freeing memory with SDL_Destroy / SDL_Free. 

Usage example:
<br />
class simple_class {   <br />
SDL_TTF_Font_ptr font = nullptr;<br />
SDL_Surface_ptr text_surface = nullptr;<br />
}<br />

void SomeMethod {<br />
    font = SDL_TTF_Font_ptr(TTF_OpenFont(fontPath.c_str(), fontSize));<br />
    text_surface = SDL_Surface_ptr(TTF_RenderText_Solid(font.get(), fontData.c_str(), fontColor));<br />
}

<br />
SDL_ptr for all standard types from SDL.h.<br />
SDL_TTF_ptr for types from SDL_ttf.h.
