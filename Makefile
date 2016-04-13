.PHONY: clean All

All:
	@echo "----------Building project:[ 05-09-window -  ]----------"
	@cd "05-09-window" && "$(MAKE)" -f  "05-09-window.mk"
clean:
	@echo "----------Cleaning project:[ 05-09-window -  ]----------"
	@cd "05-09-window" && "$(MAKE)" -f  "05-09-window.mk" clean
