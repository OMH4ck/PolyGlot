data(Animals, package="MASS")

# Fit a model
lm1 <- lm(log10(body)~log10(brain), data=Animals)

# Setup 2x2 graphics device
par(mfrow=c(2,2))

# Plot diagnostics, label the most "extreme" point based on the magnitude of residuals.
plot(lm1, id.n=1)

You'll see that in Normal Q-Q plot, the label for Brachiosaurus goes off the plotting region to the right. 

# Try for 2 points
plot(lm1, id.n=2) 
