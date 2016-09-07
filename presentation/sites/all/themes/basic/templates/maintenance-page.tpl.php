 <?php
 ?>

<head>
	<?php print $head; ?>
	<title><?php print $head_title; ?></title>
	<?php print $styles; ?>
	<?php print $scripts; ?>
</head>

<body class="<?php print $classes; ?>" <?php print $attributes;?>>

	<div id="skip-link">
		<a href="#main-content" class="element-invisible element-focusable"><?php print t('Skip to main content'); ?></a>
	</div>

	<div id="page-wrapper">
		<div id="page">			
			<div id="main-wrapper">
				<div id="main" class="clearfix">
					<div id="content" class="column">
						<div class="section">
							<a id="main-content"></a>
							<?php if ($title): ?><h1 class="title" id="page-title"><?php print $title; ?></h1><?php endif; ?>
							<?php print $content; ?>
							<?php if ($messages): ?>
								<div id="messages">
									<div class="section clearfix">
				 							<?php print $messages; ?>
				 					</div>
				 				</div>
							<?php endif; ?>
						</div>
					</div>
				</div>
			</div>
		</div>
	</div>
 </body>
