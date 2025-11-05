shellinitdir = $(sysconfdir)/mc/shell-init

shellinit_DATA = \
	ash \
	bash \
	dash \
	fish \
	ksh \
	mksh \
	zshenv \
	zshrc

EXTRA_DIST = \
    $(shellinit_DATA)

# For zsh, the installed files need to be dotfiles. Yet, prefer not to have
# (non-meta) dotfiles in the source tree.
install-data-hook:
	cd $(DESTDIR)$(shellinitdir) && mv zshenv .zshenv && mv zshrc .zshrc

uninstall-hook:
	cd $(DESTDIR)$(shellinitdir) && rm -f .zshenv .zshrc
