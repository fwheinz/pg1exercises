{ pkgs }: {
	deps = [
   pkgs.openjdk11-bootstrap
   pkgs.SDL_ttf
   pkgs.SDL_image
   pkgs.SDL
		pkgs.clang
		pkgs.ccls
		pkgs.gdb
		pkgs.gnumake
	];
}
